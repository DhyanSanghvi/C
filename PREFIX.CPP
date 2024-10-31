#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000

#define POW 4
#define DIV 3
#define MOD 3
#define MUL 3
#define ADD 2
#define SUB 2
#define LEFT_PAREN 1
#define RIGHT_PAREN 1
#define NONE -999

#define LEFT 10
#define RIGHT 20
#define OPERAND 30
#define OPERATOR 40

typedef struct
{
	int items[MAX];
	int top;
}Stack;

int isEmpty(Stack s){ return s.top==-1;}

int isFull(Stack s){ return s.top==MAX-1;}

void push(Stack *ps,int no)
{
	if(isFull(*ps))
		return ;
	ps->items[++ps->top]=no;
}

int pop(Stack *ps)
{
	if(isEmpty(*ps))
		return 0;
	return ps->items[ps->top--];
}

int peek(Stack s)
{
	if(isEmpty(s))
		return 0;
	return s.items[s.top];
}

int getType(char sym)
{
	switch(sym)
	{
		case '(':
			return LEFT;
		case ')':
			return RIGHT;
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
		case '%':
			return OPERATOR;
		default:
			return OPERAND;
	}
}

int getPrec(char sym)
{
	switch(sym)
	{
		case '+':
			return ADD;

		case '-':
			return SUB;

		case '*':
			return MUL;

		case '/':
			return DIV;

		case '^':
			return POW;

		case '%':
			return MOD;

		case ')':
			return RIGHT_PAREN;
		case '(':
			return LEFT_PAREN;

		default :
			return NONE;
	}
}

void infixToPrefix(char infix[],char prefix[])
{
	char sym,poppedElement;
	Stack stack;
	stack.top=-1;
	int len,p=0,type,prec;
	for(len=strlen(infix);len>=0;len--)
	{
		sym=infix[len];
		type=getType(sym);
		switch(type)
		{
			case RIGHT:
				push(&stack,sym);
				break;

			case LEFT:
				while((poppedElement=pop(&stack))!=')')
					prefix[p++]=poppedElement;
				break;

			case OPERAND:
				prefix[p++]=sym;
				break;

			case OPERATOR:
				prec=getPrec(sym);
				while(!isEmpty(stack) && prec<getPrec(peek(stack)))
				{
					prefix[p++]=pop(&stack);

				}
				push(&stack,sym);
				break;

			default:
				printf("Invalid");

		}
	}
	while(!isEmpty(stack))
	{
		prefix[p++]=pop(&stack);
	}
	prefix[p++]='\0';

}
void main()
{
	char infix[MAX],prefix[MAX];
	clrscr();
	printf("Enter Infix Epression:");
	fflush(stdin);
	gets(infix);
	infixToPrefix(infix,prefix);
	printf("\nPrefix Expression:%s",strrev(prefix));
	getch();
}