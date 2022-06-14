#pragma once

class cNode	{ 	

private:
	int data;
    cNode* left;
    cNode* right;

public:

	cNode();
	cNode(int d);

	void 	setLeftChild(cNode* node);
	cNode* 	getLeftChild();

	void 	setRightChild(cNode* node);
	cNode* 	getRightChild();

	void 	setData(int d);
	int  	getData();

};