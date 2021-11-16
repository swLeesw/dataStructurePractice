//#define _CRT_SECURE_NO_WARINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "BTree.h"
//
//BTreeNode* MakeBTreeNode(void)
//{
//	BTreeNode* nd = (BTreeNode*)malloc(sizeof(BTreeNode));
//	nd->left = NULL;
//	nd->right = NULL;
//	return nd;
//}
//
//BTData GetData(BTreeNode* bt)
//{
//	return bt->data;
//}
//
//void SetData(BTreeNode* bt, BTData data)
//{
//	bt->data = data;
//}
//
//BTreeNode* GetLeftSubTree(BTreeNode* bt)
//{
//	return bt->left;
//}
//
//BTreeNode* GetRightSubTree(BTreeNode* bt)
//{
//	return bt->right;
//}
//
//void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
//{
//	if (main->left != NULL)
//	{
//		free(main->left);    //해제하면 그 노드는 어디로?
//	}
//	main->left = sub;
//}
//
//void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
//{
//	if (main->right != NULL)
//	{
//		free(main->right);    //해제하면 그 노드는 어디로?
//	}
//	main->right = sub;
//}
//
//
//void InorderTraverse(BTreeNode* bt, VisitFuncPtr action)
//{
//	if (bt == NULL)
//	{
//		return;
//	}
//	InorderTraverse(bt->left, action);
//	action(bt->data);
//	InorderTraverse(bt->right, action);
//}
//
//void PreorderTraverse(BTreeNode* bt)
//{
//	if (bt == NULL)
//	{
//		return;
//	}
//	printf("%d", bt->data);
//	PreTraverse(bt->left);
//	PreTraverse(bt->right);
//
//}
//
//void PostorderTraverse(BTreeNode* bt)
//{
//	if (bt == NULL)
//	{
//		return;
//	}
//	PostorderTraverse(bt->left);
//	PostorderTraverse(bt->right);
//	printf("%d", bt->data);
//	
//}
//
//void DeleteTree(BTreeNode* bt)
//{
//	if (bt == NULL)
//	{
//		return;
//	}
//	DeleteTree(bt->left);
//	DeleteTree(bt->right);
//
//	printf("del tree data: %d\n", bt->data);
//	free(bt);
//}