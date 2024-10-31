#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX 1000

typedef struct
{
	int items[MAX];
	int top;
}Stack;

int isEmpty(Stack *ps){	return ps->top==-1; }

int isFull(Stack *ps){ return ps->top==MAX-1; }

void push(Stack *ps,int element)
{
	if(isFull(ps))
	{
		printf("OverFlow");
		return;
	}
	ps->items[++(ps->top)]=element;
}
int pop(Stack *ps)
{
	if(isEmpty(ps))
	{
		printf("\nUnderflow");
	}
	return ps->items[(ps->top)--];
}

int evaluatePostfix(char expression[])
{
	Stack stack,*ps;
	int len,i,num,num1,num2;
	stack.top=-1;

	len=0;
	while(expression[len]!='\0')
		len++;

	for(i=0;i<len;i++)
	{
		if(isspace(expression[i]))
			continue;
		else if(isdigit(expression[i]))
		{
			num=0;
			while(isdigit(expression[i]))
			{
				num=num*10+(expression[i]-'0');
				i++;
			}
			push(&stack,num);
			i--;
		}
		else
		{
			num2=pop(&stack);
			num1=pop(&stack);

			switch(expression[i])
			{
				case '+':
					push(&stack,num1+num2);
					break;
				case '-':
					push(&stack,num1-num2);
					break;
				case '*':
					push(&stack,num1*num2);
					break;
				case '/':
					if(num2==0)
					{
						printf("\nCannot divide by Zero");
						exit(0);
					}
					push(&stack,num1/num2);
					break;
				default:
					printf("Kaha se aae hoo bhai");
					exit(1);
			}
		}
	}
	return pop(&stack);
}
void main()
{
	char expression[MAX];
	int result;
	clrscr();

	printf("Enter Postfix:");
	fflush(stdin);
	gets(expression);

	result=evaluatePostfix(expression);
	printf("Result of postfix expression:%d",result);
	getch();
}