#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
#define NEG_INF -32768

typedef struct Queue
{
	int items[MAX];
	int front,rear;
}Queue;

int isEmpty(Queue pq)
{
	return pq.rear<pq.front;
}
int isFull(Queue pq)
{
	return pq.rear ==MAX-1;
}


void show(Queue q)
{
	int i;
	if(isEmpty(q))
		printf("\nNothing to show ");
	else
	{
		printf("\nQueue : ");
		for(i=q.front;i<=q.rear;i++)
			printf("%d ",q.items[i]);
	}
}

void heapup (int heap[],int newnode)
{
	int parentIndex, temp;

	 if(newnode>0)
	 {
		parentIndex=(newnode-1)/2;
		if(heap[parentIndex]<heap[newnode])
		{
			temp = heap[parentIndex];
			heap[parentIndex] = heap[newnode];
			heap[newnode]=temp;
			heapup(heap,parentIndex);
		}
	 }


}

void heapdown(int heap[],int root,int lastIndex)
{
	int leftChild,rightChild,largeIndex,temp;
	leftChild= root*2 +1;
	rightChild = root*2 + 2; // it can also be returned as rightChild = leftChild + 1;
	if(leftChild<=lastIndex)
	{
		//left child exits
		if(rightChild<=lastIndex)
		{
			//both the child exits
			if(heap[leftChild]>heap[rightChild])
				largeIndex = leftChild;
			else
				largeIndex= rightChild;
		}
		else
		{       //only left child exits
			largeIndex = leftChild;
		}
		if(heap[root]<heap[largeIndex])
		{
			//swaps the heap[root] and heap [largeChild]
			temp = heap[root];
			heap[root] = heap[largeIndex];
			heap[largeIndex] = temp;
			// calling the heapdown function again
			heapdown(heap,largeIndex,lastIndex);
		}
	}//left child doesn't exits
}//function ka braces

int insert(Queue *pq,int element)
{         int temp,i;
	if(isFull(*pq))
		return 0;
	pq->items[++(pq->rear)]=element;

	//heap up
	heapup(pq->items,pq->rear);
	//heapdown(pq->items,pq->front,pq->rear);
	return 1;
}


int poll(Queue *pq)
{
	int temp,i,pos,shift;
	if(isEmpty(*pq))
		return NEG_INF;
	temp=pq->items[pq->front];

	pq->items[pq->front]=pq->items[pq->rear];
	pq->items[pq->rear]=temp;

	heapdown(pq->items,pq->front,pq->rear-1);
	pq->rear--;


	if(isEmpty(*pq))
	{
	       pq->front=0;
		pq->rear=-1;
	}
	return temp;
}


void main()
{        int a;
	int choice,element;
	Queue queue;
	queue.front=0;
	queue.rear=-1;

	clrscr();

	while(1)
	{
		printf("\n-----------Menu----------");
		printf("\n1.Insert\n2.Pop\n3.Show\n4.Exit");
		printf("\nEnter your choice ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter the element: ");
				scanf("%d",&element);
				if(element == NEG_INF)
					printf("\nIllegal Element to insert");

				else
				{
				       a=(insert(&queue,element));
						switch(a)
						      {
							case 1:
								printf("\nElement  inserted ");
								break;
							case 0 :
								printf("\n Queue Overflow");
								break;
							}

				}
				break;
			case 2:
				element=poll(&queue);
				if(element==NEG_INF)
					printf("\nQueue underflow");
				else
					printf("\nPolled element = %d",element);


				break;

			case 3:
				show(queue);
				break;

			case 4:
				exit(1);
			default:
				printf("\nOOPS! U HAVE ENTERED THE WRONG CHOICE\nTRY AGAIN :) ");
		}//switch's braces
	}//while's braces
}//end of main
