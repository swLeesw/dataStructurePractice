//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "ArrayList.h"
//#include "NameCard.h"
//
//int main(void)
//{
//	List list;
//	NameCard* card;
//	ListInit(&list);
//
//	card = MakeNameCard("�̽¿�", "010 - 3285 - 5012");
//	LInsert(&list, card);
//	card = MakeNameCard("�̽¸�", "010 - 8888 - 1122");
//	LInsert(&list, card);
//	card = MakeNameCard("�̽�ö", "010 - 1632 - 5222");
//	LInsert(&list, card);
//	card = MakeNameCard("�̽±�", "010 - 1232 - 5012");
//	LInsert(&list, card);
//
//	if (LFirst(&list, &card))
//	{
//		if (NameCompare(card, "�̽±�") == 0)
//		{
//			ChangePhoneNum(card, "010 - 5877 - 4485");
//		}
//		while (LNext(&list, &card))
//		{
//			if (NameCompare(card, "�̽±�") == 0)
//			{
//				ChangePhoneNum(card, "010 - 5877 - 4485");
//			}
//		}
//	}
//
//	if (LFirst(&list, &card))
//	{
//		if (NameCompare(card, "�̽±�") == 0)
//		{
//			ShowNameCardInfo(card);
//		}
//		while (LNext(&list, &card))
//		{
//			if (NameCompare(card, "�̽±�") == 0)
//			{
//				ShowNameCardInfo(card);
//			}
//		}
//	}
//
//	if (LFirst(&list, &card))
//	{
//		if (NameCompare(card, "�̽±�") == 0)
//		{
//			LRemove(&list);
//			free(card);
//		}
//		while (LNext(&list, &card))
//		{
//			if (NameCompare(card, "�̽±�") == 0)
//			{
//				LRemove(&list);
//				free(card);
//			}
//		}
//	}
//
//	if (LFirst(&list, &card))
//	{
//		ShowNameCardInfo(card);
//		while (LNext(&list, &card))
//		{
//			ShowNameCardInfo(card);
//		}
//	}
//
//	return 0;
//}