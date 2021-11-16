//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <stdio.h>
//#include "ListBaseQueue.h"
//
//void QueueInit(Queue* pq)
//{
//	pq->front = NULL;
//	pq->rear = NULL;
//}
//
//int QIsEmpty(Queue* pq)
//{
//	if (pq->front == NULL)
//	{
//		return TRUE;
//	}
//	else
//	{
//		return FALSE;
//	}
//}
//
//void Enqueue(Queue* pq, Data data)
//{
//	Node* Newnode = (Node*)malloc(sizeof(Node));
//	Newnode->next = NULL;
//	Newnode->data = data;
//	if (QIsEmpty(pq))
//	{
//		pq->front = Newnode;
//		pq->rear = Newnode;
//	}
//	else
//	{
//		pq->rear->next = Newnode;
//		pq->rear = Newnode;
//	}
//}
//
//Data Dequeue(Queue* pq)
//{
//	Data rdata;
//	Node* rnode;
//	if (QIsEmpty(pq))
//	{
//		printf("¾ø¾î.");
//		exit(-1);
//	}
//	rdata = pq->front->data;
//	rnode = pq->front;
//	pq->front = pq->front->next;
//	free(rnode);
//	
//	return rdata;
//}
//
//Data QPeek(Queue* pq)
//{
//	return pq->front->data;
//}