#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 1000
#define NEG_INF -32768

typedef struct
{
	int items[MAX];
	int top;
}stack;

int isFull(stack s){ return s.top==MAX-1?1:0; }

int isEmpty(stack s){ return s.top==-1?1:0; }

void push(stack *ps,int element){  ps -> items[++ps -> top]=element; }
void show(stack s,int base)
{
	int i;
	if(!isEmpty(s))
	{
		if(base!=16)
			for(i=s.top;i>=0;i--)
				printf("%d ",s.items[i]);
		else
			for(i=s.top;i>=0;i--)
				printf("%x ",s.items[i]);
	}
}
void leftOfRadix(stack s,int whole,int base)
{
	int mod,temp;
	for(temp=whole;temp>0;temp/=base)
	{
		mod=temp%base;
		push(&s,mod);
	}
	show(s,base);
	printf(".");
}
void rightOfRadix(float frac,int base)
{
	int i=0,k,j,arr[1000],whole=0;
	float temp,fract;
	temp=frac*base;
	for(k=0;k<=4;k++)
	{

		 whole=(int)temp;
		 fract=temp-whole;
		 temp=fract*base;
		 if(whole<base)
			arr[i++]=whole;
		 else
			break;
	}
	if(base !=16)
		for(j=0;j<i;j++)
			printf("%d ",arr[j]);

	else
	     for(j=0;j<i;j++)
			printf("%x ",arr[j]);
}
void main()
{
	float dec_no,frac;
	int base,whole;
	stack s;
	s.top=-1;//very imp
	clrscr();
	printf("Enter the number to be converted:");
	scanf("%f",&dec_no);
	printf("Enter the base of the no system into which, entered number it to be converted:");
	scanf("%d",&base);
	whole=(int)dec_no;
	frac=dec_no-whole;
	printf("Result:");
	leftOfRadix(s,whole,base);
	rightOfRadix(frac,base);
	getch();
}