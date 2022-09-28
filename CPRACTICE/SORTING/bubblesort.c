#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int some[])
{
	for(int i=0; i<8; i++){
		printf("%d | ", some[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = {11,15,5,9,1,2,4,7,3};
	int size = 9;
	int loop = 0;
	int anSize = size;
//	printArray(arr);
	int flag = 1;
	for (int i=0; i<size-1 && flag!=0; i++){
		flag = 0;
		for (int j=0; j<anSize-2; j++){
			loop += 1;
			if(arr[j] > arr[j+1]){
				flag = 1;
				swap(&arr[j],&arr[j+1]);
			}
		}
		anSize -= 1;
		printf("Loop : %d \n", loop);
		printf("Flag : %d \n", flag);
		printArray(arr);
		loop = 0;
	}
//	printArray(arr);
	return 0;
}
