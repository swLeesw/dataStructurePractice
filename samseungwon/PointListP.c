#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"

	int main22(void)
	{
		List list;
		Point compPos;
		Point* ppos;

		ListInit(&list);

		/*** 4개의 데이터 저장 ***/
		ppos = (Point*)malloc(sizeof(Point));
		SetPointPos(ppos, 2, 1);
		LInsert(&list, ppos);

		ppos = (Point*)malloc(sizeof(Point));
		SetPointPos(ppos, 2, 2);
		LInsert(&list, ppos);

		ppos = (Point*)malloc(sizeof(Point));
		SetPointPos(ppos, 3, 1);
		LInsert(&list, ppos);

		ppos = (Point*)malloc(sizeof(Point));
		SetPointPos(ppos, 3, 2);
		LInsert(&list, ppos);

		/*** 저장된 데이터의 출력 ***/
		printf("현재 데이터의 수: %d \n", LCount(&list));

		if (LFirst(&list, &ppos))
		{
			ShowPointPos(ppos);

			while (LNext(&list, &ppos))
				ShowPointPos(ppos);
		}
		free(ppos);
		return 0;
	}