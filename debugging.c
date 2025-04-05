#include<stdio.h>

int main(){
	int array[100];
	int *p = array;
	
	while(1){
		//The loop goes infinitely until the value entered is 0
		printf("Enter value\n");
		scanf("%d",p);
		if (*p == 0)
			break;
		p++;
	}
	--p;
	//Move back, since the current p is pointing to zero
	while(p >= array){
		//This works because p is pointing to array, and it is sequentially higher
		printf("%d\t",*p);
		--p;
	}
	return 0;
}