#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void printLL(struct Node *head){
	while(head!=NULL){
		printf("%d --> ", head->data);
		head = head->next;
	}
	printf("NULL \n");
}

struct Node *reverseLL(struct Node *head){
	struct Node *prevNode = NULL;
	struct Node *newNode = NULL;
	while(head!=NULL){
		newNode = head->next;
		head->next = prevNode;
		prevNode = head;
		head = newNode;
	}
	return prevNode;
}


int main(){
	struct Node *alpha = malloc(sizeof(struct Node));
	struct Node *beta = malloc(sizeof(struct Node));
	struct Node *gamma = malloc(sizeof(struct Node));
	struct Node *omega = malloc(sizeof(struct Node));

	alpha->data = 8;
	beta->data = 10;
	gamma->data = 12;
	omega->data =25;

	alpha->next = beta;
	beta->next = gamma;
	gamma->next = omega;
	omega->next = NULL;

	printLL(alpha);

	printf("After Reversing the Linked Lists \n");
	
	printLL(reverseLL(alpha));
	
	return 0;
}
