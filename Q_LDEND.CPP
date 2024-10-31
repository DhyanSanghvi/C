#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 5
#define NEG_INF -32768
int i=0;
typedef struct
{
	int items[MAX];
	int front,rear;
}Queue;

int isEmpty(Queue q){return q.rear<q.front;}
int isFull(Queue q){return q.rear==MAX-1;}

int insertFromFront(Queue *pq,int ele)
{
	if(isFull(*pq))
		return 0;
	for(i=pq->rear;i>=0;i--)
		pq->items[i+1]=pq->items[i];
	pq->rear++;
	pq->items[pq->front]=ele;
	return 1;
}

int insertFromEnd(Queue *pq,int ele)
{
	if(isFull(*pq))
		return 0;
	pq->items[++pq->rear]=ele;
	return 1;
}

int pollFromFront(Queue *pq)
{
	int temp;
	if(isEmpty(*pq))
		return NEG_INF;
	temp=pq->items[pq->front++];

	if(isEmpty(*pq))
	{
		pq->front=0;
		pq->rear=-1;
	}
	return temp;
}

int pollFromEnd(Queue *pq)
{
	int temp;
	if(isEmpty(*pq))
		return NEG_INF;
	temp=pq->items[pq->rear--];

	if(isEmpty(*pq))
	{
		pq->front=0;
		pq->rear=-1;
	}
	return temp;
}

int peek(Queue q)
{
	if(isEmpty(q))
		return NEG_INF;
	return q.items[q.front];
}

void show(Queue q)
{
	int i;
	if(isEmpty(q))
		printf("Nothing to Show");
	else
	{
		printf("Queue Elements:");
		for(i=q.front;i<=q.rear;i++)
			printf("%d ",q.items[i]);
	}
}

void main()
{
	clrscr();
	int choice,ele;
	Queue q;
	q.front=0;
	q.rear=-1;

	while(1)
	{
		printf("\n----------MENU----------");
		printf("\n1.Insert form Front\n2.Insert from End\n3.Poll\n4.Poll\n5.Peek\n6.Show\n7.Exit\n8.clrscr");
		printf("\nEnter Choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter element:");
				scanf("%d",&ele);
				if(ele==NEG_INF)
				{
					printf("ILLEAGLE INPUT");
				}
				else
				{
					if(insertFromFront(&q,ele))
						printf("Element Inserted");
					else
						printf("\nQueue Overflow");
				}
				break;
			case 2:
				printf("\nEnter element:");
				scanf("%d",&ele);
				if(ele==NEG_INF)
				{
					printf("ILLEAGLE INPUT");
				}
				else
				{
					if(insertFromEnd(&q,ele))
						printf("Element Inserted");
					else
						printf("\nQueue Overflow");
				}
				break;
			case 3:
				ele=pollFromFront(&q);
				if(ele==NEG_INF)
					printf("Queue Underflow");
				else
					printf("\nPolled Element:%d",ele);
				break;
			case 4:
				ele=pollFromEnd(&q);
				if(ele==NEG_INF)
					printf("Queue Underflow");
				else
					printf("\nPolled Element:%d",ele);
				break;
			case 5:
				ele=peek(q);
				if(ele==NEG_INF)
					printf("\nNothing to peek");
				else
					printf("\nPeeked Element:%d",ele);
				break;
			case 6:
				show(q);
				break;
			case 7:
				exit(1);
				break;
			case 8:
				clrscr();
				show(q);
				break;
			default:
				printf("\nInvalid Choice");
		}
	}
	getch();
}