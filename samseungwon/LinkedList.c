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
//	newNode->next = plist->head->next;  //head->next�� ���� ���(NULL)�� ����Ŵ.
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
//	if (plist->head->next == NULL)   //�ڷᰡ ������ 0 ��ȯ.
//	{
//		return FALSE;
//	}
//	
//	plist->before = plist->head;   //before�� head
//	plist->cur = plist->head->next;  //cur�� head��next�� ��Ƴ�
//	*pdata = plist->cur->data;   //ù��° �����͸� pdata�� ����.
//
//	return TRUE;
//}
//
//
//
//int LNext(List* plist, LData* pdata)
//{
//	if (plist->cur->next == NULL)   //cur->next�� data�� ������ 0 ��ȯ
//	{
//		return FALSE;
//	}
//
//	plist->before = plist->cur;   //before�� cur�� �Ѵܰ� �ڷ� �̵���Ŵ.
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