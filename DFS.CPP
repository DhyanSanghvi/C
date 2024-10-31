#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
static cnt=0;
void dfs(int k,int visited[],int adj[100][100],int n,res[])
{
	int i;
	visited[k]=1;
	res[cnt++]=k;
	for(i=0;i<n;i++)
	{
		if(adj[k][i] && !visited[i])
		{
			visited[i]=1;
			dfs(i,visited,adj,n);
		}
	}
}
void main()
{
	fflush(stdin);
	clrscr();
	int i,j,ele,n,choice;
	int adj[100][100],visited[100]res[100];
	/*----------STEP 1----------*/
	printf("\nEnter the number of Vertices:");
	scanf("%d",&n);
	printf("\nAdjecentcy:\nEnter 1 if Adjecent.\nEnter 0 if not Adjecent.\n");
	for(i=0;i<n;i++)
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
	}
	/*printf("\nYour Matrix:\n");
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
	for(i=0;i<n;i++)
		if(visited[i]==0)
			dfs(i,visited,adj,n,res);
	/*----------STEP 5----------*/
	//Created DFS()
	printf("\nDepth First Search:");
	for(i=0;i<cnt;i++)
		printf("%d ",res[i]);
	getch();
}
