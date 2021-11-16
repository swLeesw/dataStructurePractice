//#ifndef __linked_listC_h__
//#define __linked_listC_h__
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
//typedef struct _linkedListC
//{
//	Node* tail;
//	Node* cur;
//	Node* before;
//	int numOfData;
//	//int (*comp)(LData d1, LData d2);
//} LinkedListC;
//
//typedef LinkedListC List;
//
//void ListInit(List* plist);
//void LInsert(List* plist, LData data);
//void LInsertFront(List* plist, LData data);
//int LFirst(List* plist, LData* pdata);
//int LNext(List* plist, LData* pdata);
//LData LRemove(List* plist);
//int LCount(List* plist);
//
////void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));
//
//#endif
//
//#ifndef __C_LINKED_LIST_H__
//#define __C_LINKED_LIST_H__
//
//#define TRUE	1
//#define FALSE	0
//
//typedef int Data;
//
//typedef struct _node
//{
//	Data data;
//	struct _node* next;
//} Node;
//
//typedef struct _CLL
//{
//	Node* tail;
//	Node* cur;
//	Node* before;
//	int numOfData;
//} CList;
//
//
//typedef CList List;
//
//void ListInit(List* plist);
//void LInsert(List* plist, Data data);
//void LInsertFront(List* plist, Data data);
//
//int LFirst(List* plist, Data* pdata);
//int LNext(List* plist, Data* pdata);
//Data LRemove(List* plist);
//int LCount(List* plist);
//
//#endif