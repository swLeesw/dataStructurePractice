#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "DBLinkedList.h"

int main(void)
{
	List list;
	Data data;
	ListInit(&list);

	LInsert(&list, 1);
	LInsert(&list, 2);
	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);

	if (LFirst(&list, &data))
	{
		printf("%d", data);
		while (LNext(&list, &data))
		{
			printf("%d", data);
		}
	}


	return 0;
}