#include <iostream>

#include "cNode.h"
#include "cBinaryTree.h"


// ***********************************************
// ******                                   ******
// ***********************************************
cBinaryTree::cBinaryTree() {

	root = NULL;
}

// ***********************************************
// ******                                   ******
// ***********************************************
cBinaryTree::cBinaryTree(int nNodes) {

	root = recursiveBuildTree(nNodes);
}

// ***********************************************
// ******                                   ******
// ***********************************************
cBinaryTree::~cBinaryTree() {

	return;
}

// ***********************************************
// ******                                   ******
// ***********************************************
cNode* cBinaryTree::recursiveBuildTree( int n ) {

int nne, nnd;

static int k = 0;

	if (n == 0)
		return NULL;

	cNode *novoNo = new cNode(k++);	

	if (novoNo == NULL)
		return novoNo;

	nnd = n / 2;
	nne = n - nnd - 1;

	novoNo->setLeftChild(recursiveBuildTree(nne));
	novoNo->setRightChild(recursiveBuildTree(nnd));

	return novoNo;
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cBinaryTree::recursivePreOrderTrav(cNode* r) {

	if (r == NULL) {
		std::cout << "." << std::endl;
		return;
		}
	
	std::cout << r->getData() << std::endl;

	recursivePreOrderTrav(r->getLeftChild());

	recursivePreOrderTrav(r->getRightChild());
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cBinaryTree::preOrderTraversal() {

	recursivePreOrderTrav(root);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cBinaryTree::recursiveInOrderTrav(cNode* r) {

	if (r == NULL) {
		std::cout << "." << std::endl;
		return;
		}
	
	recursiveInOrderTrav(r->getLeftChild());

	std::cout << r->getData() << std::endl;

	recursiveInOrderTrav(r->getRightChild());
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cBinaryTree::inOrderTraversal() {

	recursiveInOrderTrav(root);
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cBinaryTree::recursivePosOrderTrav(cNode* r) {

	if (r == NULL) {
		std::cout << "." << std::endl;
		return;
		}
	
	recursivePosOrderTrav(r->getLeftChild());

	recursivePosOrderTrav(r->getRightChild());

	std::cout << r->getData() << std::endl;
}

// ***********************************************
// ******                                   ******
// ***********************************************
void cBinaryTree::posOrderTraversal() {

	recursivePosOrderTrav(root);
}
