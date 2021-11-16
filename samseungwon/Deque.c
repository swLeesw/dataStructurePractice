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
//		pdeq->head->prev = Newnode; //Empty 상태에서 이 수식을 else 처리 안하면
//	}                               //head->prev가 자신을 가리키게 됨.
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
//	if (pdeq->head == NULL) //노드 삭제 후 메모리가 없을 때
//	{
//		pdeq->tail = NULL;  //tail이 댕글링포인터가 되므로 초기화시켜줘야한다.
//	}
//	else                      //메모리가 있으면
//	{
//		pdeq->head->prev = NULL;   //head->prev가 댕글링 포인터가 되므로 ....
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
