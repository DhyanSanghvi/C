#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 100
typedef struct
{
	int items[MAX];
	int top;
}Stack;

//int isFull(Stack s){ return (s.top==MAX-1); }

void push(Stack *ps,int element)
{
      ps->top++;
      ps->items[ps->top]=element;
}

int peek(Stack stack)
{
	return stack.items[stack.top];
}

void show(Stack s)
{
	int i;
	printf("\nYour Stack contains:");
	for(i=s.top;i>=0;i--)
		printf("%d ",s.items[i]);
}




int leftPart(Stack *stack,int left,int base)
{
	int cnt=0,temp=0,rem=0,grp=1,final=0,k=0,res=0,ans=0;
	temp=left;

	//counting number of digits and putting keft into the stack.
	while(temp!=0)
	{
		rem=temp%10;
		push(stack,rem);
		cnt++;
		temp=temp/10;
	}


	if(base==10)
	{
		ans=0;
		for(k=stack->top;k>=0;k--)
		{
			res=peek(*stack)*(pow(2,k));
			ans=ans+res;
			stack->top--;
		}
		final=final*10+ans;
		return final;
	}

	//Finding number of members in a group.
	while(pow(2,grp)<base)
		grp++;

	printf("\nGroup ka size:%d",grp);
	getch();
	printf("\nBefore:");
	show(*stack);
	getch();

	//Adding 0s.
	while(cnt%grp!=0)
	{
		cnt++;
		push(stack,0);
	}
	printf("\nAfter adding 0s");
	show(*stack);
	getch();

	//Grouping And Answer
	lable:
	ans=0;
	for(k=grp-1;k>=0;k--)
	{
		res=peek(*stack)*(pow(2,k));
		ans=ans+res;
		stack->top--;
	}
	final=final*10+ans;
	if(stack->top>=0)
		goto lable;

	return final;
}



void main()
{
	int i,len,left,right,temp,base,Lfinal;
	Stack stack;
	char j,num[100];
	clrscr();
	stack.top=-1;//V_IMP
	printf("Enter the Binary term:");
	fflush(stdin);
	gets(num);
	len=strlen(num);
	for(i=0;i<len;i++)
	{
		while(num[i]!='.')
		{
			temp=num[i]-'0';
			left=(left*10)+temp;
		}
	}
	//left=(int)num;
	//right=num-left;
	printf("Enter the base of number system you want to convert it in:");
	scanf("%d",&base);
	Lfinal=leftPart(&stack,left,base);
	printf("\nFinal:%d",Lfinal);
	getch();
}