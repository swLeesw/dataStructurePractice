//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "LinkedList.h"
//#include "Point.h"
//
//void ListInit(List* plist)
//{
//	plist->head = (Node*)malloc(sizeof(Node));
//	plist->head->next = NULL;
//	plist->comp = NULL;
//	plist->numOfData = 0;
//}
//
//void LInsert(List* plist, LData data)
//{
//	if (plist->comp == NULL)
//	{
//		FInsert(plist, data);
//	}
//	else
//	{
//		SInsert(plist, data);
//	}
//}
//
//void FInsert(List* plist, LData data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = data;
//
//	newNode->next = plist->head->next;  //head->next는 더미 노드(NULL)를 가리킴.
//	plist->head->next = newNode;
//
//	(plist->numOfData)++;
//}
//
//void SInsert(List* plist, LData data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	Node* pred = plist->head;
//	newNode->data = data;
//	while (pred->next != NULL && plist->comp(newNode->data, pred->next->data))
//	{
//		pred = pred->next;
//	}
//
//	newNode->next = pred->next;
//	pred->next = newNode;
//
//	(plist->numOfData)++;
//}
//
//int LFirst(List* plist, LData* pdata)
//{
//	if (plist->head->next == NULL)   //자료가 없으면 0 반환.
//	{
//		return FALSE;
//	}
//	
//	plist->before = plist->head;   //before을 head
//	plist->cur = plist->head->next;  //cur을 head의next로 잡아놈
//	*pdata = plist->cur->data;   //첫번째 데이터를 pdata에 삽입.
//
//	return TRUE;
//}
//
//
//
//int LNext(List* plist, LData* pdata)
//{
//	if (plist->cur->next == NULL)   //cur->next에 data가 없으면 0 반환
//	{
//		return FALSE;
//	}
//
//	plist->before = plist->cur;   //before과 cur을 한단계 뒤로 이동시킴.
//	plist->cur = plist->cur->next;
//
//	*pdata = plist->cur->data;
//	return TRUE;
//}
//
//LData LRemove(List* plist)
//{
//	LData rdata = plist->cur->data;
//	plist->before->next = plist->cur->next;
//	free(plist->cur);
//	plist->cur = plist->before;
//	(plist->numOfData)--;
//
//	return rdata;
//}
//
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}
//
//void SetSortRule(List* plist, int (*comp)(LData d1, LData d2))
//{
//	plist->comp = comp;
//}