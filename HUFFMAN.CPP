#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int count=0;
/*****(STEP 2)******&*****CREATING THE FREQUNCY TABLE****&******(STEP 3)*****/
typedef struct Node
{
	char ele;
	int freq;
	struct Node *next;
}Node;
Node *head=NULL;

void show()
{
	Node *current;
	current=head;
	if(current==NULL)
		printf("\nLinked List Empty");
	else
	{
		printf("\nYour Linked List:");
		while(current!=NULL)
		{
			printf("\n%c | %d ",current->ele,current->freq);
			current=current->next;
		}
	}
}
void getfreq(char expr[],int cnt[])
{
	int len,i;
	len=strlen(expr);
	for(i=0;i<26;i++)
		cnt[i]=0;
	for(i=0;i<len;i++)
	{
		if(expr[i]>='A' && expr[i]<='Z')
		{
			cnt[(int)(expr[i]-'A')]++;
		}
		if(expr[i]>='a' && expr[i]<='z')
		{
			cnt[(int)(expr[i]-'a')]++;
		}
	}
}
void insertSort(int cnt[],int i)
{
	Node *current,*follow,*pnode;
	pnode=(Node *)malloc(sizeof(Node));
	if(pnode==NULL)
	{
		printf("Memory Overflow!!");
		return;
	}
	pnode->freq=cnt[i];
	pnode->ele=(char)i+65;
	pnode->next=NULL;
	if(head==NULL)
	{
		head=pnode;
	}
	else
	{
		current=head;
		while(current->freq<=pnode->freq && current!=NULL)
		{
			follow=current;
			current=current->next;
		}

		pnode->next=current;
		if(current==head)
			head=pnode;
		else
			follow->next=pnode;
	}
}

void createNodes(int cnt[])
{
	int i;
	for(i=0;i<26;i++)
	{
		if(cnt[i]!=0)
		{
			insertSort(cnt,i);
			count++;
		}
	}
}
/****************************************************************************/
/*************************************QUEUE**********************************/
typedef struct
{
	int items[MAX];
	int front,rear,count;
}Queue;

int isFull(Queue q){return q.count==MAX;}
int isEmpty(Queue q){return q.count==0;}

int insert(Queue *pq,int ele)
{
	int i=0;
	if(isFull(*pq))
		return 0;
	if(pq->rear==MAX-1)
		pq->rear=0;
	else
		pq->rear++;
	pq->items[pq->rear]=ele;
	pq->count++;

	if(pq->front < pq->rear)
	{
		for(i=pq->rear-1 ; i>=pq->front && pq->items[i]>ele ; i--)
		{
			pq->items[i+1]=pq->items[i];
			pq->items[i]=ele;
		}
	}
	else
	{
		for(i=MAX-1 ; i >= pq->front && pq->items[i]>ele ; i--)
		{
			pq->items[i+1]=pq->items[i];
			pq->items[i]=ele;
		}
		for(i=pq->rear-1 ; i>=0 && pq->items[i]>ele ; i--)
		{
			pq->items[i+1]=pq->items[i];
			pq->items[i]=ele;
		}
	}
	//printf("Front=%d",front);
	return 1;
}

void main()
{
	char expr[100];
	int i,cnt[26];
	clrscr();
	/*1.Taking Expression*/
	printf("Enter the Expression:");
	fflush(stdin);
	gets(expr);
	/*2.Calculate Frequency*/
	getfreq(expr,cnt);
	/*3.Insert Into Linked List*/
	createNodes(cnt);
	show();
	/*4.Insert The Data Of Linked List Into Queue(Priority) With Merging*/

	/*5.Acc to the Queue Create a Tree With The Merged Elements*/
	/*6.Enscribe The Code For Each ALPHA And Store It In An Array*/
	/*7.Make The Final Expression(Encrypted)*/
	getch();
}