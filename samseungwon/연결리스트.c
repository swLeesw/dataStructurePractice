//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _node			//���Ḯ��Ʈ ����ü ����
//{
//	int data;
//	struct _node* next;
//}Node;
//
//int main(void)
//{
//
//	//���Ḯ��Ʈ ���� �� �Է�.
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* DMY = NULL;
//	Node* cur = NULL;
//	Node* newnode = NULL;
//	int readdata;
//	while (1)
//	{
//		printf("�ڿ��� �Է�.");
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
//	//���Ḯ��Ʈ ���.
//	
//	printf("����Ʈ ��� : ");
//	if (head == NULL)
//	{
//		printf("�Է¹��� ������ �����ϴ�.");
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
//	//���Ḯ��Ʈ ����.
//	printf("����Ʈ ����.\n");
//	Node* delNode = NULL;
//	Node* delNodeNext = NULL;
//	if (head == NULL)
//	{
//		printf("������ ��尡 �������� ����.");
//	}
//	else
//	{
//		delNode = head;
//		delNodeNext = head->next;
//		printf("%d ��(��) �����Ǿ����ϴ�\n", delNode->data);
//		free(delNode);
//		while (delNodeNext != NULL)
//		{
//			delNode = delNodeNext;
//			delNodeNext = delNodeNext->next;
//			
//			printf("%d ��(��) �����Ǿ����ϴ�\n", delNode->data);
//			free(delNode);
//		}
//
//	}
//
//	return 0;
//}