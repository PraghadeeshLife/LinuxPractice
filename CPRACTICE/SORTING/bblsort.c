#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[]){
	int size = 9;
	for(int i=0; i<size; i++){
		printf(" %d |", arr[i]);
	}
	printf("\n");
}

int main(){
	int some[] = {10, 20, 1, 45, 42, 3, 2, 5, 7};
	int size = sizeof(some)/sizeof(int);
	printf("Size : %d \n", size);
	printArray(some);
	int flag = 1;
	for(int i=0; i<size && flag; i++){
		flag = 0;
		for(int j=0; j<size-1; j++){
			if(some[j] > some[j+1]){
				flag = 1;
				swap(&some[j], &some[j+1]);
			}
		}
		printArray(some);
	}
	return 0;
}
