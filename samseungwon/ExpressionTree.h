#ifndef EXPRESS_H_
#define EXPRESS_H_
#include "BTree.h"


BTreeNode* MakeExpTree(char exp[]);
//int EvaluateExpTree(BTreeNode* bt);

void ShowNodeData(int data);

void ShowInfixTypeExp(BTreeNode* bt);


#endif