#pragma once

#include <vector>

class cBinaryTree {

private:
	cNode *root;

	cNode* recursiveBuildTree(int nNodes);

	void 	recursivePreOrderTrav(cNode* r);
	void 	recursiveInOrderTrav(cNode* r);
	void 	recursivePosOrderTrav(cNode* r);	

public:

	cBinaryTree();
	cBinaryTree(int nNodes);
	~cBinaryTree();

	void 	preOrderTraversal();
	void 	inOrderTraversal();
	void 	posOrderTraversal();	
};
