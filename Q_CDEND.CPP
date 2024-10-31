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

int insertFront(Queue *pq,int ele)
{
	if(isFull(*pq))
		return 0;
	if(pq->front!=0)
		pq->front--;
	else
		pq->front=MAX-1;
	pq->items[pq->front]=ele;
	return 1;
}
int insertRear(Queue *pq,int ele)
{
	if(isFull(*pq))
		return 0;
	if(pq->rear==MAX-1)
		pq->rear=0;
	else
		pq->rear++;
	pq->items[pq->rear]=ele;
	pq->count++;
	return 1;
}

int pollFront(Queue *pq)
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

int pollRear(Queue *pq)
{
	int temp;
	if(isEmpty(*pq))
		return NEG_INF;
	temp=pq->items[pq->rear];
	if(pq->rear==0)
		pq->rear=MAX-1;
	else
		pq->rear--;
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
	clrscr();
	int choice,ele;
	Queue q;
	q.front=0;
	q.rear=-1;
	q.count=0;

	while(1)
	{
		printf("\n----------MENU----------");
		printf("\n1.Insert Front\n2.Insert Rear\n3.Poll Front\n4.Poll Rare\n5.Peek Front\n6.Peek Rare\n7.Show\n8.Exit\n9.clrscr");
		printf("\nEnter Choice:");
		scanf("%d",&choice);

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
					if(insertRear(&q,ele))
						printf("Element Inserted");
					else
						printf("\nQueue Overflow");
				}
				break;
			case 2:
				printf("Enter element:");
				scanf("%d",&ele);
				if(ele==NEG_INF)
				{
					printf("ILLEAGLE INPUT");
				}
				else
				{
					if(insertFront(&q,ele))
						printf("Element Inserted");
					else
						printf("\nQueue Overflow");
				}
				break;
			case 3:
				ele=pollFront(&q);
				if(ele==NEG_INF)
					printf("Queue Underflow");
				else
					printf("\nPolled Element:%d",ele);
				break;
			case 4:
				ele=pollRear(&q);
				if(ele==NEG_INF)
					printf("Queue Underflow");
				else
					printf("\nPolled Element:%d",ele);
				break;
			case 5:
				ele=peekFront(q);
				if(ele==NEG_INF)
					printf("Nothing to peek");
				else
					printf("Peeked Element:%d",ele);
				break;
			case 6:
				ele=peekRear(q);
				if(ele==NEG_INF)
					printf("Nothing to peek");
				else
					printf("Peeked Element:%d",ele);
				break;
			case 7:
				show(q);
				break;
			case 8:
				exit(1);
				break;
			case 9:
				clrscr();
				show(q);
				break;
			default:
				printf("Invalid Choice");
		}
	}
	getch();
}