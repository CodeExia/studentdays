#include<stdio.h>
int main(){

	int array[5]= {5,2,6,8,1};
	int *yarra = array;
		printf("odd numbers:\n");
	for(int x = 0; x<5; x++){
		if(array[x]%2!=0){
		printf("%d %d %d\n", *(yarra + x), *(array + x),array[x]);
    }
	}
	return 0;
}