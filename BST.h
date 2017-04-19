//Written by Braeden Richards
//Created: 04/18/2017

#ifndef iostream
#include <iostream>
#endif

#ifndef fstream
#include <fstream>
#endif

struct Node{
	int data;
	Node* left;
	Node* right;

};

class BinarySearchTree{
public:
	BinarySearchTree(); //Default Constructor
//	BinarySearchTree(Node&); //Constructor with a value for the root
	
	bool Insert(int data);
	int GetData(); //Returns the data of the root node; Mainly used for debugging
private:
	Node* root;

};



//Task: The default constructor
//Input: None
//Output: Void
BinarySearchTree::BinarySearchTree()
{
	root = NULL;

	return;
}



//Task: A constructor with a root value
//Input: A node to copy over as the new root
//Output: Void
//BinarySearchTree::BinarySearchTree(Node& sourceNode)
//{ 
//	Node* tempNode;
//	tempNode->data = sourceNode.data;
//	tempNode->right = NULL;
//	tempNode->left = NULL;
//
//	root = tempNode;
//
//	return;
//}



//Task: Inserts a new integer into the tree
//Input: integer to enter
//Output: True if successful; False if data is already in tree
bool BinarySearchTree::Insert(int data)
{
	if(root == NULL)
	{
		root = new Node;
		root->data = data;
		root->right = NULL;
		root->left = NULL;
	}
	return true;
}



//Task: Returns the Data of the node
//Input: None
//Output: an integer
int BinarySearchTree::GetData()
{
	return 10;
}
