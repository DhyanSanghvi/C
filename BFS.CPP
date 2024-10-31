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
int Empty(Queue q){return q.count==0;}

int insert(Queue *pq,int ele)
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

int remove(Queue *pq)
{
	int temp;
	if(Empty(*pq))
		return NEG_INF;
	temp=pq->items[pq->front];
	if(pq->front==MAX-1)
		pq->front=0;
	else
		pq->front++;
	pq->count--;
	return temp;
}

void bfs(int k,Queue *q,int visited[],int adj[100][100],int n)
{
	int i;
	insert(q,k);
	visited[k]=1;
	printf("\nBreadth First Search:");
	while(!Empty(*q))
	{
		k=remove(q);
		printf("%d ",k);
		for(i=0;i<n;i++)
		{
			if(adj[k][i] && !visited[i])
			{
				insert(q,i);
				visited[i]=1;
			}
		}
	}
}
void main()
{
	fflush(stdin);
	clrscr();
	int i,j,n,v,choice;
	char ele;
	int adj[100][100],visited[100];
	Queue q;
	q.front=0;
	q.rear=-1;
	q.count=0;
	/*----------STEP 1----------*/
	printf("\nEnter the number of Vertices:");
	scanf("%d",&n);
	//printf("\nAdjecentcy:\nEnter 1 if Adjecent.\nEnter 0 if not Adjecent.\n");
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Is %d Adjecent to %d?:",i,j);
			scanf("%d",&choice);
			if(choice)
				adj[i][j]=1;
			else
				adj[i][j]=0;
		}
		printf("\n");
	}*/
	printf("\nAdjecency:");
	printf("\nIf The Vertex is Adjecent to any vertex enter y and the vertex");
	printf("\nIf not Enter n");
	for(i=0;i<n;i++)
	{
		while(1)
		{
			printf("\nIs %d adjecent to any Vetexs?:",i);
			fflush(stdin);
			scanf("%c",&ele);
			if(ele=='Y'||ele=='y')
			{
				printf("\nWhich vertex?:");
				scanf("%d",&v);
				if(v>=0 && v<n)
					adj[i][v]=1;
				else
					printf("\nThere is no such Vertex");
			}
			else
				break;
		}
	}

	/*//Displaying ADJ
	printf("\nYour Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",adj[i][j]);
		printf("\n");
	}*/

	/*----------STEP 2----------*/
	for(i=0;i<n;i++)
		visited[i]=0;

	/*----------STEP 3----------*/
	//Done.Created Insert, Remove and Empty

	/*----------STEP 4----------*/
	for(i=0;i<n;i++)
		if(visited[i]==0)
			bfs(i,&q,visited,adj,n);
	/*----------STEP 5----------*/
	//Created BFS()
	getch();
}
