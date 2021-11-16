//#ifndef _B_TREE_H_
//#define _B_TREE_H_
//
//typedef int BTData;
//
//typedef struct _bTreeNode
//{
//	BTData data;
//	struct _bTreeNode* left;
//	struct _bTreeNode* right;
//} BTreeNode;
//
//BTreeNode* MakeBTreeNode(void);
//BTData GetData(BTreeNode* bt);
//void SetData(BTreeNode* bt, BTData data);
//
//BTreeNode* GetLeftSubTree(BTreeNode* bt);
//BTreeNode* GetRightSubTree(BTreeNode* bt);
//
//void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
//void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);
//typedef void (*VisitFuncPtr)(BTData data);
//void InorderTraverse(BTreeNode* bt, VisitFuncPtr action); //���� ��ȸ
//void PreorderTraverse(BTreeNode* bt); //���� ��ȸ
//void PostorderTraverse(BTreeNode* bt); //���� ��ȸ
//
//void DeleteTree(BTreeNode* bt);
//#endif