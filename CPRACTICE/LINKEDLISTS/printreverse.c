#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void printreverse(struct Node *head){
	if(head->next){
		printreverse(head->next);
	}
	printf("%d \n", head->data);
}


int main(){
	struct Node *alpha = malloc(sizeof(struct Node));
	struct Node *beta = malloc(sizeof(struct Node)); 
	struct Node *gamma = malloc(sizeof(struct Node));
	struct Node *omega = malloc(sizeof(struct Node));

	alpha->data = 1;
	beta->data = 2;
	gamma->data = 3;
	omega->data = 4;

	alpha->next = beta;
	beta->next = gamma;
	gamma->next = omega;
	omega->next = NULL;

	printreverse(alpha);	
	return 0;
}
