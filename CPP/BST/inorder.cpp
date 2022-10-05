#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left, *right;
};

Node* newNode(int data){
	Node* temp = new Node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;	
	return temp;
}


void printInOrder(struct Node* node){
	if(node == NULL){
		return;
	}
	printInOrder(node->left);
	cout << node->data << " ";
	printInOrder(node->right);

}


int main(){

	struct Node* root = newNode(1);
    	root->left = newNode(2);
    	root->right = newNode(3);
    	root->left->left = newNode(4);
    	root->left->right = newNode(5);


      	// Function call
    	cout << "\nInorder traversal of binary tree is \n";
    	printInOrder(root);
	return 0;
}
