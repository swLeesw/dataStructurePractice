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
//void InorderTraverse(BTreeNode* bt, VisitFuncPtr action); //중위 순회
//void PreorderTraverse(BTreeNode* bt); //전위 순회
//void PostorderTraverse(BTreeNode* bt); //후위 순회
//
//void DeleteTree(BTreeNode* bt);
//#endif