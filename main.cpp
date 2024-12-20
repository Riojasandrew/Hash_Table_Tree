#include <iostream>
#include <vector>
#include "Hash_Table.h"  

using namespace std;

int main()
{
	// Create the tree model
	TreeNode* root = createTree();

	// Represent tree structure
	cout << "Tree: " << endl;
	displayTree(root);
	return 0;
}