//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include "LinkedList.h"
//#include "Point.h"
//
//int WhoIsPrecede(int d1, int d2)
//{
//	if (d1 < d2)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
////int WhoIsPrecede (Point* d1,Point* d2)
////{
////	if(d1->xpos < d2->xpos)
////	{
////		return 0;
////	}
////	else if (d1->xpos == d2->xpos)
////	{
////		if (d1->ypos < d2->ypos)
////		{
////			return 0;
////		}
////		else
////		{
////			return 1;
////		}
////	}
////	else
////	{
////		return 1;
////	}
////	
////}
//
//int main(void)
//{
//	List list;
//	ListInit(&list);
//	int data;
//
//	SetSortRule(&list, WhoIsPrecede);
//
//	LInsert(&list, 1);
//	LInsert(&list, 2);
//	LInsert(&list, 4);
//	LInsert(&list, 3);
//	LInsert(&list, 5);
//	printf("����� �������� ���� %d��\n", LCount(&list));
//	
//	printf("������ ���: ");
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//		{
//			printf("%d ", data);
//		}
//	}
//	printf("\n������ ����\n\n");
//	if (LFirst(&list, &data))
//	{
//
//		while (LNext(&list, &data))
//		{
//			printf("%d(��)�� �����ƾ�.\n",LRemove(&list));
//		}
//	}
//
//	printf("\n���� �������� ���� %d��\n", LCount(&list));
//
//	printf("������ ���: ");
//	if (LFirst(&list, &data))
//	{
//		printf("%d ", data);
//
//		while (LNext(&list, &data))
//		{
//			printf("%d ", data);
//		}
//	}
//
//	return 0;
//}
