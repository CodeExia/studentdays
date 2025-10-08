#include <stdio.h>
#include <stdlib.h>

#define MAXN 8  // you can increase, but keep within limit
#define MAX ( (1 << MAXN) * 2 + 1 )

char canvas[MAX][MAX];
int N;  // = 1 << n
int canvasW, canvasH;
int cx, cy;      // current position in canvas (x, y)
int dirx, diry;  // direction vector (dx, dy), in canvas units of 2

void init_canvas(int n) {
    N = 1 << n;
    canvasW = 2 * N + 1;
    canvasH = 2 * N + 1;
    for (int y = 0; y < canvasH; y++) {
        for (int x = 0; x < canvasW; x++) {
            canvas[y][x] = ' ';
        }
    }
}

// mark a point (center) in canvas
void mark_point(int x, int y) {
    canvas[y][x] = '#';
}

// step one “edge” in the direction (dirx, diry), marking the connecting cell
void step_edge(void) {
    int nx = cx + dirx;
    int ny = cy + diry;
    // mark the edge cell
    canvas[ny][nx] = '#';
    // then step to next center
    cx = nx + dirx;
    cy = ny + diry;
    // mark the center
    canvas[cy][cx] = '#';
}

// rotate left 90° (dirx, diry) → (−diry, dirx)
void turn_left(void) {
    int tx = dirx;
    dirx = -diry;
    diry = tx;
}

// rotate right 90° (dirx, diry) → (diry, −dirx)
void turn_right(void) {
    int tx = dirx;
    dirx = diry;
    diry = -tx;
}

void hilbert_A(int level);
void hilbert_B(int level);

void hilbert_A(int lvl) {
    if (lvl <= 0) return;
    turn_right();
    hilbert_B(lvl - 1);
    step_edge();
    turn_left();
    hilbert_A(lvl - 1);
    step_edge();
    hilbert_A(lvl - 1);
    turn_left();
    step_edge();
    hilbert_B(lvl - 1);
    turn_right();
}

void hilbert_B(int lvl) {
    if (lvl <= 0) return;
    turn_left();
    hilbert_A(lvl - 1);
    step_edge();
    turn_right();
    hilbert_B(lvl - 1);
    step_edge();
    hilbert_B(lvl - 1);
    turn_right();
    step_edge();
    hilbert_A(lvl - 1);
    turn_left();
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Bad input\n");
        return 1;
    }
    if (n > MAXN) {
        fprintf(stderr, "n too large, max = %d\n", MAXN);
        return 1;
    }

    init_canvas(n);

    // Start at “center of bottom-left cell”
    // In canvas coordinates, cell centers are at odd coordinates (1,3,5,…)
    // Let’s start at (1, canvasH−2) — that is bottom‑left center.
    cx = 1;
    cy = canvasH - 2;
    // initial direction is “rightwards” (two cells horizontally in canvas)
    dirx = 1;
    diry = 0;

    mark_point(cx, cy);
    hilbert_A(n);

    // Print canvas
    for (int y = 0; y < canvasH; y++) {
        for (int x = 0; x < canvasW; x++) {
            putchar(canvas[y][x]);
        }
        putchar('\n');
    }

    return 0;
}
