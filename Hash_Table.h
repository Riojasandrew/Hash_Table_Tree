#pragma once
#include <iostream>
#include <vector> 

using namespace std;

// TreeNode definition
struct TreeNode
{
	int value;
	vector<TreeNode*> children;

	TreeNode(int val) : value(val){}
};

// Function
void displayTree(TreeNode* root, int level = 0);
TreeNode* createTree();