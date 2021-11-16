//#define _CRT_SECURE_NO_WARINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "LinkedListC.h"
//
//int main(void)
//{
//	List list;
//	int data;
//
//	ListInit(&list);
//
//	LInsert(&list, 1);
//	LInsert(&list, 3);
//	LInsert(&list, 2);
//	LInsert(&list, 5);
//
//	if (LFirst(&list, &data))
//	{
//		printf("%d", data);
//
//		for (int i = 0; i < LCount(&list) * 3; i++)
//		{
//			while(LNext(&list, &data))
//			{
//				printf("%d", data);
//			}
//		}
//	}
//
//	return 0;
//}