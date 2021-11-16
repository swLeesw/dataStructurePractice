//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node			//연결리스트 구조체 생성
//{
//	int data;
//	struct _node* next;
//}Node;
//
//int main(void)
//{
//
//	//연결리스트 생성 및 입력.
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* DMY = NULL;
//	Node* cur = NULL;
//	Node* newnode = NULL;
//	int readdata;
//	while (1)
//	{
//		printf("자연수 입력.");
//		scanf("%d", &readdata);
//
//		if (readdata < 1)
//		{
//			break;
//		}
//
//		newnode = (Node*)malloc(sizeof(Node));
//		newnode->data = readdata;
//		newnode->next = NULL;
//		
//		if (head == NULL)
//		{
//			head = newnode;
//		}
//		else
//		{
//			tail->next = newnode;
//			/*head = newnode;               //the way adding a node to head and keep tail on head
//			head->next = tail;*/
//		}
//		tail = newnode;
//
//	}
//
//	//연결리스트 출력.
//	
//	printf("리스트 출력 : ");
//	if (head == NULL)
//	{
//		printf("입력받은 내용이 없습니다.");
//	}
//	else
//	{
//		cur = head;
//		printf("%d ", cur->data);
//		
//		while (cur->next != NULL)
//		{
//			cur = cur->next;
//			printf("%d ", cur->data);
//		}
//	}
//	printf("\n\n");
//
//	//연결리스트 삭제.
//	printf("리스트 삭제.\n");
//	Node* delNode = NULL;
//	Node* delNodeNext = NULL;
//	if (head == NULL)
//	{
//		printf("삭제할 노드가 존재하지 않음.");
//	}
//	else
//	{
//		delNode = head;
//		delNodeNext = head->next;
//		printf("%d 이(가) 삭제되었습니다\n", delNode->data);
//		free(delNode);
//		while (delNodeNext != NULL)
//		{
//			delNode = delNodeNext;
//			delNodeNext = delNodeNext->next;
//			
//			printf("%d 이(가) 삭제되었습니다\n", delNode->data);
//			free(delNode);
//		}
//
//	}
//
//	return 0;
//}