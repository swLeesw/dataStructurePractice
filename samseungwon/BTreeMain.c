//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "BTree.h"
//
//void shownode(int a);
//
//int main(void)
//{
//	BTreeNode* a1 = MakeBTreeNode();
//	BTreeNode* a2 = MakeBTreeNode();
//	BTreeNode* a3 = MakeBTreeNode();
//	BTreeNode* a4 = MakeBTreeNode();
//
//	SetData(a1, 1);
//	SetData(a2, 2);
//	SetData(a3, 3);
//	SetData(a4, 4);
//
//	MakeLeftSubTree(a1, a2);
//	MakeRightSubTree(a1, a3);
//	MakeLeftSubTree(a2, a4);
//
//
//	printf("%d", GetData(GetLeftSubTree(GetLeftSubTree(a1))));
//	
//	InorderTraverse(a1, shownode);
//	printf("\n");
//	DeleteTree(a2);
//	InorderTraverse(a1, shownode);
//	return 0;
//}
//
//void shownode(int a)
//{
//	printf("%d", a);
//}