#include <iostream>

#include "cNode.h"
#include "cBinaryTree.h"
  
// ***********************************************
// ***********************************************
// ***********************************************

int main(int argv, char** argc) {
	
int maxNodes;

  if (argv > 1)
    maxNodes = atoi(argc[1]);
  else
    maxNodes = 24;

  cBinaryTree t(maxNodes);
		
  printf("\n====== POS ======\n");
  t.posOrderTraversal();
  printf("\n=================\n\n\n");

  printf("\n====== IN ======\n");
  t.inOrderTraversal();
  printf("\n=================\n\n\n");

  printf("\n====== PRE ======\n");
  t.preOrderTraversal();
  printf("\n=================\n\n\n");
    
}

    

