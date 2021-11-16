//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include "BaseStack.h"
//
//void ConvToRPNExp(char exp[]);             //RPN = Reverse Polish Notation
//
//int WhoPrecOp(char op1, char op2);
//
//int GetOpPrec(char op);
//
//int main(void)
//{
//	char exp[] = "(2*2+4)/2+3";
//	ConvToRPNExp(exp);
//
//	printf("%s", exp);
//	
//	return 0;
//}
//
//void ConvToRPNExp(char exp[])             //RPN = Reverse Polish Notation
//{
//	Stack stack;
//	int expLen = strlen(exp);
//	char* convExp = (char*)calloc(expLen + 1, sizeof(char));
//
//	int i, idx = 0;
//	char tok, popOp;
//
//	StackInit(&stack);
//
//	for (int i = 0; i < expLen; i++)
//	{
//		tok = exp[i];
//		if (isdigit(tok))
//		{
//			convExp[idx++] = tok;
//		}
//		else
//		{
//			switch (tok)
//			{
//			case '(':
//			{
//				SPush(&stack, tok);
//				break;
//			}
//			case ')':
//			{
//				while (1)
//				{
//					popOp = SPop(&stack);
//					if (popOp == '(')
//					{
//						break;
//					}
//					convExp[idx++] = popOp;
//				}
//				break;
//			}
//			case '+': case '-':
//			case '/': case '*':
//			{
//				while (!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
//				{
//					convExp[idx++] = SPop(&stack);
//				}
//				SPush(&stack, tok);
//				break;
//			}
//			}
//		}
//	}
//	while (!SIsEmpty(&stack))
//	{
//		convExp[idx++] = SPop(&stack);
//	}
//	strcpy(exp, convExp);
//	free(convExp);
//
//}
//
//int WhoPrecOp(char op1, char op2)
//{
//	int op1Prec = GetOpPrec(op1);
//	int op2Prec = GetOpPrec(op2);
//
//	if (op1Prec > op2Prec)
//	{
//		return 1;
//	}
//	else if (op1Prec < op2Prec)
//	{
//		return -1;
//	}
//	return 0;                   //  op1, op2의 우선순위가 같다면
//}
//
//int GetOpPrec(char op)
//{
//	switch (op)
//	{
//	case '*':
//		return 3;
//	case '/':
//		return 3;
//	case '+':
//		return 2;
//	case '-':
//		return 2;
//	case '(':
//		return 1;
//
//	}
//	return -1;
//}
