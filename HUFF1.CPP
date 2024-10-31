#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int count=0;
typedef struct Node
{
	char ele;
	int freq;
	struct Node *next;
}Node;
Node *head=NULL;

/*typedef struct treeNode
{
	char ele;
	int freq;
	struct treeNode *left,*right;
}tNode;
tnode *root=NULL;
*/
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

/*Node *head1=NULL;
void copy()
{
	int i=0;
	Node *current,*current1,*pnode;
	head1=head;
	current=head;
	current1=head1;
	for(i=0;i<count;i++)
	{
		pnode=(Node *)malloc(sizeof(Node));
		pnode->next=NULL;
		pnode->ele=current->ele;
		pnode->freq=current->freq;
		current1->next=pnode;
		current=current->next;
		current1=current1->next;
	}
}
void show1()
{
	Node *current;
	current=head1;
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
}*/

Node mergeNode()
{
	Node *current,*next,*follow;
	current=head;
	next=current->next;

}

void main()
{
	char expr[100];
	int i,cnt[26];
	clrscr();
	printf("Enter the Expression:");
	fflush(stdin);
	gets(expr);
	getfreq(expr,cnt);
	createNodes(cnt);
	printf("Count=%d",count);
	//copy();
	show();
	//show1();
	getch();
}