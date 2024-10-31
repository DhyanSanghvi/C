#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

//FIND
#define LEFT_PAREN -10
#define RIGHT_PAREN -20
#define OPERATOR -30
#define OPERAND -40

//PRECEDENCE
#define LEFT_PAREN_PREC 0
#define ADD_PREC 1
#define SUB_PREC 1
#define MUL_PREC 2
#define DIV_PREC 2
#define MOD_PREC 2
#define POW_PREC 3

#define NONE -999

#define MAX 100
#define SS 100

typedef struct
{
	char items[SS];
	int top;
}Stack;

int isEmpty(Stack s){ return s.top==-1?1:0; }

int isFull(Stack s){ return s.top==SS-1?1:0; }

void push(Stack *ps,char sym)
{
	if(isFull(*ps))
		printf("Stack Overflow");
	else
		ps->items[++ps->top]=sym;
}

char pop(Stack *ps)
{
	if(isEmpty(*ps))
	{
		printf("Stack Underflow");
		return '\0';
	}
	else
		return ps->items[ps->top--];
}

char peek(Stack s)
{
	if(isEmpty(s))
	{
		printf("Stack  Underflow");
		return'\0';
	}
	else
		return s.items[s.top];
}

int getType(char symbol)
{
	switch(symbol)
	{
		case '(':return LEFT_PAREN;
		case ')':return RIGHT_PAREN;
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
		return OPERATOR;
		default:return OPERAND;

	}
}

int getPerc(char OP)
{
	switch(OP)
	{
		case '+':return ADD_PREC;
		case '-':return SUB_PREC;
		case '*':return MUL_PREC;
		case '/':return DIV_PREC;
		case '%':return MOD_PREC;
		case '^':return POW_PREC;
		case '(':return LEFT_PAREN_PREC;
		default:return NONE;
	}
}

void infixToPostfix(char infix[],char postfix[])
{
	Stack stack;
	int len=0,i,type,p,prec;
	char symbol,popedElement;

	stack.top=-1;
	i=0;
	p=0;
	len=strlen(infix);

	while(i<len)
	{
		symbol=infix[i];
		type=getType(symbol);
		switch(type)
		{
			case LEFT_PAREN:
				push(&stack,symbol);
				break;

			case RIGHT_PAREN:
				while((popedElement=pop(&stack))!='(')
					postfix[p++]=popedElement;
				break;

			case OPERATOR:
				prec= getPerc(symbol);
				while(!isEmpty(stack) && prec<=getPerc(peek(stack)))
					postfix[p++]=pop(&stack);

				push(&stack,symbol);
				break;

			case OPERAND:
				postfix[p++]=symbol;
				break;
		}
		i++;
	}

	while(!isEmpty(stack))
		postfix[p++]=pop(&stack);
	postfix[p]='\0';
}
void main()
{
	char infix[MAX],postfix[MAX];
	clrscr();
	printf("Enter the expression:");
	fflush(stdin);
	gets(infix);
	infixToPostfix(infix,postfix);
	printf("\nPostfix Expression: %s",postfix);
	getch();
}