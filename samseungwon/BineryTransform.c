//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//
//    int size = 1;
//    int num = 0;
//    int* n = (int*)malloc(sizeof(int) * size);
//    /*int* n = (int*)calloc(size, sizeof(int));*/ //calloc ���� �� �ڵ����� 0���� �ʱ�ȭ ��.
//    int count = 0;
//    
//    printf("�ڿ����� �Է����ּ��� :");
//    scanf("%d", &num);
//    
//    for (int i = 0; num != 0; i++)
//    {
//        n[i] = num % 2;
//        num /= 2;
//        if (num != 0)
//        {
//            size++;
//            n = (int*)realloc(n, sizeof(int) * size);
//        }
//    }
//
//    for (int i = size - 1; i >= 0; i--)
//    {
//        printf("%d", n[i]);
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        if (n[i] == 1)
//        {
//            count++;
//        }
//    }
//    printf("\n%d", count);
//
//    free(n);
//    
//}