//#ifndef __linked_list_h__
//#define __linked_list_h__
//
//#define TRUE 1
//#define FALSE 0
//
//typedef int LData;
//
//typedef struct _node
//{
//	LData data;
//	struct _node* next;
//} Node;
//
//typedef struct _linkedList
//{
//	Node* head;
//	Node* cur;
//	Node* before;
//	int numOfData;
//	int (*comp)(LData d1, LData d2);
//} LinkedList;
//
//typedef LinkedList List;
//
//void ListInit(List* plist);
//void LInsert(List* plist, LData data);
//void FInsert(List* plist, LData data);
//void SInsert(List* plist, LData data);
//
//int LFirst(List* plist, LData* pdata);
//int LNext(List* plist, LData* pdata);
//
//LData LRemove(List* plist);
//int LCount(List* plist);
//
//void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));
//
//#endif