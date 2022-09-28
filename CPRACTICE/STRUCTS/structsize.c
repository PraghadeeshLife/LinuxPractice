#include <stdio.h>
#include <stdlib.h>


struct struct1{
	int a;
	int b;
	char c;
	int d;
};

struct struct2{
	int a;
	char b;
	char d;
	int c;
}__attribute__((packed));


int main(){
	printf("Size of Integer : %d \n", sizeof(int));
	printf("Size of Character : %d \n", sizeof(char));
	printf("Size of Structure 1 : %d \n", sizeof(struct struct1));
	printf("Size of Structure 2 : %d \n", sizeof(struct struct2));
	return 0;
}
