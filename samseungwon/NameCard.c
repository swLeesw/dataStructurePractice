//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include "NameCard.h"
//
//NameCard* MakeNameCard(char* name, char* phone)
//{
//	NameCard* NewCard = (NameCard*)malloc(sizeof(NameCard));
//	strcpy(NewCard->name, name);
//	strcpy(NewCard->phone, phone);
//	return NewCard;
//}
//
//void ShowNameCardInfo(NameCard* pcard)
//{
//	printf("[�̸�] %s \n", pcard->name);
//	printf("[��ȣ] %s \n", pcard->phone);
//}
//
//int NameCompare(NameCard* pcard, char* name)
//{
//	return strcmp(pcard->name, name);
//}
//
//void ChangePhoneNum(NameCard* pcard, char* phone)
//{
//	strcpy(pcard->phone, phone);
//}