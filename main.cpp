//Written by Braeden Richards
//Created: 04/18/2017

#ifndef iostream
#include <iostream>
#endif

#ifdef fstream
#include <fstream>
#endif

#ifndef BST
#include "BST.h"
#endif


int main(void)
{
//	Node tempNode;
//	tempNode.data = 5;
//	tempNode.right = NULL;
//	tempNode.left = NULL;
//	BinarySearchTree tree1(tempNode);
	
//	std::cout << tree1.GetData() << "\n";

	BinarySearchTree tree1;

	tree1.Insert(7);

	std::cout << tree1.GetData() << "\n";

	return 0;
}
