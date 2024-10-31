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

int evaluatePrefix(char expression[])
{
	Stack stack,*ps;
	int len,i,num,num1,num2;
	stack.top=-1;

	len=strlen(expression);
	printf("\nLength=%d\n",len);
	getch();
	for(i=len-1;i>=0;i--)
	{
		if(isspace(expression[i]))
			continue;
		else if(expression[i]>='0'&& expression[i]<='9')
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

	printf("Enter Prefix:");
	fflush(stdin);
	gets(expression);
	printf("Your Expression:%s",expression);

	result=evaluatePrefix(expression);
	printf("Result of prefix expression:%d",result);
	getch();
}