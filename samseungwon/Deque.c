//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "Deque.h"
//
//void DequeInit(Deque* pdeq)
//{
//	pdeq->head = NULL;
//	pdeq->tail = NULL;
//}
//
//int DQIsEmpty(Deque* pdeq)
//{
//	if (pdeq->head == NULL)
//	{
//		return TRUE;
//	}
//	else
//	{
//		return FALSE;
//	}
//}
//
//void DQAddFirst(Deque* pdeq, Data data)
//{
//	Node* Newnode = (Node*)malloc(sizeof(Node));
//	Newnode->data = data;
//	if (DQIsEmpty)
//	{
//		pdeq->tail = Newnode;
//	}
//	else
//	{
//		pdeq->head->prev = Newnode; //Empty ���¿��� �� ������ else ó�� ���ϸ�
//	}                               //head->prev�� �ڽ��� ����Ű�� ��.
//	Newnode->next = pdeq->head;
//	Newnode->prev = NULL;
//	pdeq->head = Newnode;
//}
//
//void DQAddLast(Deque* pdeq, Data data)
//{
//	Node* Newnode = (Node*)malloc(sizeof(Node));
//	Newnode->data = data;
//	if (DQIsEmpty)
//	{
//		pdeq->head = Newnode;
//	}
//	else
//	{
//		pdeq->tail->next = Newnode;
//	}
//	Newnode->prev = pdeq->tail;
//	Newnode->next = NULL;
//	pdeq->tail = Newnode;
//}
//
//Data DQRemoveFirst(Deque* pdeq)
//{
//	Data rdata;
//	Node* rnode = pdeq->head;
//
//	if (DQIsEmpty(pdeq))
//	{
//		printf("No Data!");
//		exit(-1);
//	}
//	rdata = rnode->data;
//	pdeq->head = pdeq->head->next;
//	free(rnode);
//	
//	if (pdeq->head == NULL) //��� ���� �� �޸𸮰� ���� ��
//	{
//		pdeq->tail = NULL;  //tail�� ��۸������Ͱ� �ǹǷ� �ʱ�ȭ��������Ѵ�.
//	}
//	else                      //�޸𸮰� ������
//	{
//		pdeq->head->prev = NULL;   //head->prev�� ��۸� �����Ͱ� �ǹǷ� ....
//	}
//
//	return rdata;
//}
//
//Data DQREmoveLast(Deque* pdeq)
//{
//	Data rdata;
//	Node* rnode = pdeq->tail;
//
//	if (DQIsEmpty(pdeq))
//	{
//		printf("No Data!");
//		exit(-1);
//	}
//	rdata = rnode->data;
//	pdeq->tail = pdeq->tail->prev;
//
//	free(rnode);
//
//	if (pdeq->tail == NULL)
//	{
//		pdeq->head = NULL;
//	}
//	else
//	{
//		pdeq->tail->next = NULL;
//	}
//	
//	return rdata;
//
//}
//
//Data DQGetFirst(Deque* pdeq)
//{
//	if (DQIsEmpty(pdeq))
//	{
//		printf("No Data!");
//		exit(-1);
//	}
//	return pdeq->head->data;
//}
//
//Data DQGetLast(Deque* pdeq)
//{
//	if (DQIsEmpty(pdeq))
//	{
//		printf("No Data!");
//		exit(-1);
//	}
//	return pdeq->tail->data;
//}
//
//
//
//
//
