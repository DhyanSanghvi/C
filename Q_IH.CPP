#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 5
#define NEG_INF -32768
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
	//printf("\nFront=%d",pq->front);

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

int poll(Queue *pq)
{
	int temp;

	if(isEmpty(*pq))
		return NEG_INF;
	temp=pq->items[pq->front];
	if(pq->front==MAX-1)
		pq->front=0;
	else
		pq->front++;
	pq->count--;
	return temp;
}

int peekFront(Queue q)
{
	if(isEmpty(q))
		return NEG_INF;
	return q.items[q.front];
}

int peekRear(Queue q)
{
	if(isEmpty(q))
		return NEG_INF;
	return q.items[q.rear];
}

void show(Queue q)
{
	int i=0;
	if(isEmpty(q)){
		printf("Nothing to Show");
		return ;
		}

	printf("Queue Elements:");
	if(q.front<=q.rear)
	{
		for(i=q.front;i<=q.rear;i++)
			printf("%d ",q.items[i]);
	}
	else
	{
		for(i=q.front;i<MAX;i++)
			printf("%d ",q.items[i]);
		for(i=0;i<=q.rear;i++)
			printf("%d ",q.items[i]);
	}
}
void main()
{
	fflush(stdin);
	clrscr();
	int choice,ele;
	Queue q;
	q.front=0;
	q.rear=-1;
	q.count=0;

	while(1)
	{
		printf("\n----------MENU----------");
		printf("\n1.Insert\n2.Poll\n3.Peek Front\n4.Peek Rare\n5.Show\n6.Exit");
		printf("\nEnter Choice:");
		scanf("%d",&choice);
		printf("Front=%d",q.front);
		switch(choice)
		{
			case 1:
				printf("Enter element:");
				scanf("%d",&ele);
				if(ele==NEG_INF)
				{
					printf("ILLEAGLE INPUT");
				}
				else
				{
					if(insert(&q,ele))
						printf("Element Inserted");
					else
						printf("\nQueue Overflow");
				}
				break;
			case 2:
				ele=poll(&q);
				if(ele==NEG_INF)
					printf("Queue Underflow");
				else
					printf("\nPolled Element:%d",ele);
				break;
			case 3:
				ele=peekFront(q);
				if(ele==NEG_INF)
					printf("Nothing to peek");
				else
					printf("Peeked Element:%d",ele);
				break;
			case 4:
				ele=peekRear(q);
				if(ele==NEG_INF)
					printf("Nothing to peek");
				else
					printf("Peeked Element:%d",ele);
				break;
			case 5:
				show(q);
				break;
			case 6:
				exit(1);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	getch();
}