//#define CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include "CircularQueue.h"
//
//#define CUS_COME_TERM 15 //주문간격
//#define CHE_BUR 0 //치벅
//#define BUL_BUR 1 //불벅
//#define DUB_BUR 2 //더블벅
//
//#define CHE_TERM 12 //치벅 시간
//#define BUL_TERM 15 //불벅 시간
//#define DUB_TERM 24 //더블벅 시간
//
//int main(void)
//{
//	int makeProc = 0; //버거 제작 진행 상황
//	int cheOrder = 0, bulOrder = 0, dubOrder = 0;
//	int sec;
//
//	srand(time(NULL));
//
//	Queue que;
//
//	QueueInit(&que);
//
//	for (sec = 0; sec <= 3600; sec++) //for문 한번 반복당 1초
//	{
//		if (sec % CUS_COME_TERM == 0)
//		{
//			switch (rand() & 3)
//			{
//			case CHE_BUR :
//			{
//				Enqueue(&que, CHE_TERM);
//				cheOrder += 1;
//				break;
//			}
//
//			case BUL_BUR:
//			{
//				Enqueue(&que, BUL_TERM);
//				bulOrder += 1;
//				break;
//			}
//
//			case DUB_BUR:
//			{
//				Enqueue(&que, DUB_TERM);
//				dubOrder += 1;
//				break;
//			}
//			}
//		}
//
//		if (makeProc <= 0 && !QIsEmpty(&que)) //makeProc가 0이 될 때마다 하나씩 뺌
//		{
//			makeProc = Dequeue(&que);
//		}
//
//		makeProc--;
//
//	}
//
//	printf("Simulator Report \n");
//	printf("-cheese burger: %d \n", cheOrder);
//	printf("-bulgogi burger: %d \n", bulOrder);
//	printf("-dubble burger: %d \n", dubOrder);
//	printf("-waiting room size: %d", QUE_LEN);
//
//	return 0;
//}