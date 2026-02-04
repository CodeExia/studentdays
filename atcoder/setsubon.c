    #include <stdio.h>

    int main(){
        int n;
        int k;
        int total = 0;
        int counter = -1;

        scanf("%d %d", &n, &k);

        while (total < k){
            total += n;
            n++;
            counter++;
        }

        printf("%d", counter);

        return 0;
    }