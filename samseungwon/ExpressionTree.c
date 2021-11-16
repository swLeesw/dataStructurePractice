//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <string.h>
//#include "ArrayBaseStack.h"
//#include "BTree.h"
//BTreeNode* MakeExpTree(char exp[])
//{
//	Stack stack;
//	BTreeNode* btree;
//	int explen = strlen(exp);
//	StackInit(&stack);
//	for (int i = 0; i < explen; i++)
//	{
//		btree = MakeBTreeNode();
//
//		if (isdigit(exp[i]))
//		{
//			SetData(btree, exp[i] - '0');
//		}
//		else
//		{
//			MakeRightSubTree(btree, SPop(&stack));
//			MakeLeftSubTree(btree, SPop(&stack));
//			SetData(btree, exp[i]);
//		}
//		SPush(&stack, btree);
//	}
//	return SPop(&stack);
//}
//
////int EvaluateExpTree(BTreeNode* bt)
////{
////
////}
//
//void ShowNodeData(int data)
//{
//	if (0 <= data && data <= 9)
//	{
//		printf("%d ", data); //피연산자 출력
//	}
//	else
//	{
//		printf("%c ", data); //연산자 출력
//	}
//}
//
//void ShowInfixTypeExp(BTreeNode* bt)
//{
//	InorderTraverse(bt, ShowNodeData);
//}
