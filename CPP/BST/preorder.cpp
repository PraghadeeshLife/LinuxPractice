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


void printPreOrder(struct Node* node){
	if(node == NULL){
		return;
	}
	cout << node->data << " ";
	printPreOrder(node->left);
	printPreOrder(node->right);

}


int main(){

	struct Node* root = newNode(1);
    	root->left = newNode(2);
    	root->right = newNode(3);
    	root->left->left = newNode(4);
    	root->left->right = newNode(5);


      	// Function call
    	cout << "\nInorder traversal of binary tree is \n";
    	printPreOrder(root);
	cout << "\n";
	return 0;
}
