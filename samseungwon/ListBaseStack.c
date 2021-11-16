//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "ListBaseStack.h"
//
//void StackInit(Stack* pstack)
//{
//	pstack->head = NULL;
//}
//
//int SIsEmpty(Stack* pstack)
//{
//	if (pstack->head == NULL)
//	{
//		return TRUE;
//	}
//	else
//	{
//		return FALSE;
//	}
//}
//
//void SPush(Stack* pstack, Data data)
//{
//	Node* NewNode = (Node*)malloc(sizeof(Node));
//
//	NewNode->data = data;
//	NewNode->next = pstack->head;
//
//	pstack->head = NewNode;
//}
//
//Data SPop(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error!");
//		exit(-1);
//	}
//	Data rdata;
//	Node* rnode;
//	rnode = pstack->head;
//	rdata = rnode->data;
//	pstack->head = pstack->head->next;
//	free(rnode);
//	return rdata;
//}
//
//Data SPeek(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		printf("Stack Memory Error!");
//		exit(-1);
//	}
//	return pstack->head->data;
//}