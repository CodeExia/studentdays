#include <stdio.h>

int main(){
    int t; // Ends here time 
    int n; // How many times aoki kun passes

    scanf("%d %d\n", &n, &t);

    // array
    int timestamps[n];
    for (int i = 0; i < n; i++){
        scanf("%d ", &timestamps[i]);
    }

    // logic stuff
    int counter = 0;
    for (int time = 0; time < t; time++){
        if (time == timestamps[counter++]){

        }
    }

    return 0; 
}