#include <iostream>
#include <vector>
#include "Hash_Table.h"

// Function to display the tree
void displayTree(TreeNode* root, int level)
{
	// null ptr represents null pointer value
	if (root == nullptr) return;
	//Indentation for hierarchy
	for (int i = 0; i < level; i++) 
	{
		cout << " ";
	}
	cout << root->value << endl;

	// Display all children --> num#
	for (TreeNode* child : root->children)
	{
		displayTree(child, level + 1);
	}
}


// Function to create the tree
TreeNode* createTree()
{
	// Root Node
	TreeNode* root = new TreeNode(1);

	// Level 1
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node3 = new TreeNode(3);

	root->children.push_back(node2);
	root->children.push_back(node3);

	// Level 2
	TreeNode* node4 = new TreeNode(4);
	TreeNode* node5 = new TreeNode(5);

	node2->children.push_back(node4);
	node2->children.push_back(node5);

	TreeNode* node6 = new TreeNode(6);
	node3->children.push_back(node6);

	// Level 3
	TreeNode* node7 = new TreeNode(7);
	node4->children.push_back(node7);

	TreeNode* node8 = new TreeNode(8);
	TreeNode* node9 = new TreeNode(9);

	node5->children.push_back(node8);
	node6->children.push_back(node9);


	
	TreeNode* node15 = new TreeNode(15);
	root->children.push_back(node15);
	
	// Level 4
	TreeNode* node19 = new TreeNode(19);
	node15->children.push_back(node19);

	return root;

}