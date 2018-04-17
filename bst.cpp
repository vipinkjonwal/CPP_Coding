/*
Program     : Binary Search Tree Implementation
Author      : © Vipin Kumar
Created on  : April 13, 2018 10:47 IST
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};


class BinarySearchTree {
public:
	node * root;
	int element;
	node* newNode (int);
	BinarySearchTree ();
	~BinarySearchTree ();
	node* insertion (node*, int);
	void inorder (node*);
	void preorder (node*);
	void postorder (node*);
	bool search (node*, int);
	node* findMin (node*);
};

BinarySearchTree::BinarySearchTree () {
	root = NULL;
}

BinarySearchTree::~BinarySearchTree () {
	delete root;
}


node* BinarySearchTree::newNode (int value) {
	node* temp = new node;
	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


node* BinarySearchTree::insertion (node* root, int value) {
	if (root == NULL) {
		root = newNode (value);
	}

	else {
		if (value < root->data) {
			root->left = insertion(root->left, value);
		}

		else if (value > root->data) {
			root->right = insertion (root->right, value);
		}

		else {
			cout << "ERROR: Duplicate values not allowed in BST.";
		}
	}
	return root;
}


void BinarySearchTree::inorder (node* root) {
	if (root != NULL) {
		inorder (root->left);
		cout << root->data << " ";
		inorder (root->right);
	}
}


void BinarySearchTree::preorder (node* root) {
	if (root != NULL) {
		cout << root->data << " ";
		preorder (root->left);
		preorder (root->right);
	}
}


void BinarySearchTree::postorder (node* root) {
	if (root != NULL) {
		postorder (root->left);
		postorder (root->right);
		cout << root->data << " ";
	}
}


bool BinarySearchTree::search (node* root, int value) {
	if (root == NULL) {
		return false;
	}

	else {
		if (value == root->data) {
			return true;
		}
		else {
			if (value < root->data) {
				search (root->left, value);
			}
			else if (value > root->data) {
				search (root->right, value);
			}
		}
	}
}


node* BinarySearchTree::findMin (node* root) {
	node* present = root;
	while (present->left != NULL) {
		present = present->left;
	}
	return present;

}

int main () {
	BinarySearchTree bst;

	bst.root = bst.insertion (bst.root, 10);
	bst.root = bst.insertion (bst.root, 5);\
	bst.root = bst.insertion (bst.root, 15);
	bst.root = bst.insertion (bst.root, 2);
	bst.root = bst.insertion (bst.root, 20);
	bst.root = bst.insertion (bst.root, 25);
	bst.root = bst.insertion (bst.root, 18);
	cout << "\nInorder";
	bst.inorder (bst.root);
	cout << "\nPreorder";
	bst.preorder (bst.root);
	cout << "\nPostorder";
	bst.postorder (bst.root);
	cout << bst.search (bst.root, 10);
	cout << bst.search (bst.root, 18);
	cout << bst.search (bst.root, 19);

	getch ();
	return 0;
	

}