#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//#define NULL 0;

typedef struct Node
{
	int data;
	struct Node *prev,*next;
}Node;
//declaring and initialising Head and tail of the LL
Node *head=NULL,*tail=NULL;

//A function to create a node put data into it and return the whole node
Node* createNode(int data)
{
	Node *pnode;
	pnode=(Node*)malloc(sizeof(Node));
	if(pnode==NULL)
	{
		printf("Memory Overflow!!");
		return NULL;
	}
	pnode->data=data;
	pnode->next=pnode->prev=NULL;

	return pnode;
}

//A function to search if there is a node with matching data and return the Node
Node* search(int ele)
{
	Node *current;
	if(head==NULL)
		return NULL;
	current=head;
	while(current!=tail && current->data!=ele)
		current=current->next;
	return current;

}

//INSERT AT BEGINING
void insertBeg(int ele)
{
	Node *pnode=createNode(ele);
	if(pnode!=NULL)
	{
		if(head==NULL)
			head=tail=pnode;
		else
		{
			pnode->next=head;
			head->prev=pnode;
			head=pnode;
		}
		printf("Node Inserted\3");
	}
}

//INSERT AT END
void insertEnd(int ele)
{
	Node *pnode=createNode(ele);
	if(pnode!=NULL)
	{
		if(head==NULL)
			head=tail=pnode;
		else
		{
			pnode->prev=tail;
			tail->next=pnode;
			tail=pnode;
		}
		printf("Node Inserted\3");
	}
}
//INSERT AFTER
void insertAfter(int ele,int key)
{
	if(head==NULL)
	{
		printf("Linked List Empty No element to add AFTER!!\1");
		return ;
	}
	Node *current,*pnode;
	current=search(key);
	if(current==NULL)
	{
		printf("Element NOT found!!\1");
		return ;
	}
	pnode=createNode(ele);
	//connecting
	if(current==tail)
	{
		pnode->prev=tail;
		tail->next=pnode;
		tail=pnode;
	}
	else
	{
		pnode->prev=current;
		pnode->next=current->next;
		current->next->prev=pnode;
		current->next=pnode;
	}
	printf("Node Inserted!!\2");
}

//INSERT BEFORE
void insertBefore(int ele,int key)
{
	Node *pnode,*current;
	current=search(key);
	if(current==NULL)
	{
		printf("Element NOT found!!\1");
		return ;
	}
	pnode=createNode(ele);
	if(current==head)
	{
		head->prev=pnode;
		pnode->next=head;
		head=pnode;
	}
	else
	{
		pnode->prev=current;
		pnode->next=current->next;
		current->prev->next=pnode;
		current->prev=pnode;
	}
	printf("Node Inserted!!\2");
}

//INSERT AT POSITION
void insertPos(int ele,int pos)
{
	Node *current,*pnode;
	current=head;
	int i;
	for(i=0;i<pos && current!=NULL;i++)
		current=current->next;
	pnode=createNode(ele);
	if(current == head)
	{
		pnode->next=head;
		head->prev=pnode;
		head=pnode;
		printf("Node Inserted!!\2");
	}
	/*else if(current == tail)
	{
		pnode->prev=tail;
		tail->next=pnode;
		tail=pnode;
		printf("Node Inserted!!\2");
	}*/
	else if(i==pos)
	{
		pnode->prev=current->prev;
		pnode->next=current;
		current->prev->next=pnode;
		current->prev=pnode;
	}
	else
	{
		free(pnode);
		printf("Position Out of range!!\3");
	}
}
void deleteBeg()
{
	Node *current;
	if(head==NULL)
	{
		printf("Linked List Empty Nothing to delete!!\2");
		return ;
	}
	current=head;
	if(head==tail)
		head=tail=NULL;
	else
	{
		head=head->next;
		head->prev=NULL;
	}
	printf("\nDeleting : %d",current->data);
	free(current);
}
void deleteEnd()
{
	Node *current;
	if(head == NULL)
	{
		printf("Linked List Empty Nothing to delete!!\2");
		return ;
	}
	current=tail;
	if(head==tail)
		head=tail=NULL;
	else
	{
		tail=tail->prev;
		tail->next=NULL;
	}
	printf("Deleting : %d",current->data);
	free(current);
}
void deleteElement(int ele)
{
	Node *current;
	current=search(ele);
	if(current==NULL)
	{
		printf("Element Not found!!\n1");
		return ;
	}
	if(head==tail)
		head=tail=NULL;
	else if(current==head)
	{
		head=head->next;
		head->prev=NULL;
	}
	else if(current==tail)
	{
		tail=tail->prev;
		tail->next=NULL;
	}
	else
	{
		current->prev->next=current->next;
		current->next->prev=current->prev;
	}
	printf("Deleting : %d",current->data);
	free(current);
}
void deletePos(int pos)
{
	Node *current,*pnode;
	current=head;
	int i;
	for(i=0;i<pos && current!=NULL;i++)
		current=current->next;
	if(current == head)
	{
		head=head->next;
		head->prev=NULL;
		free(current);
		printf("Node Deleted!!\2");
	}
	else if(current == tail)
	{
		tail=tail->prev;
		tail->next=NULL;
		free(current);
		printf("Node Deleted!!\2");
	}
	else if(i==pos)
	{
		current->prev->next=current->next;
		current->next->prev=current->prev;
		free(current);
		printf("Node Deleted!!\2");
	}
	else
		printf("Position Out of range!!\3");
}
void traverseStart()
{
	Node *current;
	if(head==NULL)
	{
		printf("Linked List Empty nothing to show!!\1");
		return ;
	}
	current=head;
	printf("Your Linked List:");
	while(current!=NULL)
	{
		printf("%d ",current->data);
		current=current->next;
	}
}
void traverseEnd()
{
	Node *current;
	if(head==NULL)
	{
		printf("Linked List Empty nothing to show!!\1");
		return ;
	}
	current=tail;
	printf("Your Linked List:");
	while(current!=NULL)
	{
		printf("%d ",current->data);
		current=current->prev;
	}
}
void main()
{
	int ele,choice,key;
	clrscr();
	while(1)
	{
		printf("\n---------------MENU---------------");
		printf("\n1.Insert At Begining\n2.Insert At End\n3.Insert After Element\n4.Insert Before Element\n5.Insert At Position\n6.Delete From Begining\n7.Delete From End\n8.Delete The Element\n9.Delete At Position\n10.Search\n11.Traverse From Front\n12.Traverse From Back\n13.CLEAR AND DISPLAY\n14.Exit");
		printf("\nEnter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter Element:");
				scanf("%d",&ele);
				insertBeg(ele);
				break;
			case 2:
				printf("Enter Element:");
				scanf("%d",&ele);
				insertEnd(ele);
				break;
			case 3:
				printf("Enter Element to be inserted:");
				scanf("%d",&ele);
				printf("Enter the 'AFTER' Element:");
				scanf("%d",&key);
				insertAfter(ele,key);
				break;
			case 4:
				printf("Enter Element to be inserted:");
				scanf("%d",&ele);
				printf("Enter the 'BEFORE' Element:");
				scanf("%d",&key);
				insertBefore(ele,key);
				break;
			case 5:
				printf("Enter Element to be inserted:");
				scanf("%d",&ele);
				printf("Enter the Position:");
				scanf("%d",&key);
				insertPos(ele,key);
				break;
			case 6:
				deleteBeg();
				break;
			case 7:
				deleteEnd();
				break;
			case 8:
				printf("Enter Element to be Deleted:");
				scanf("%d",&ele);
				deleteElement(ele);
				break;
			case 9:
				printf("Enter the Position:");
				scanf("%d",&key);
				deletePos(key);
				break;
			case 10:
				printf("Enter the element to be searched:");
				scanf("%d",&ele);
				printf("%d Found!!!!!!",(search(ele))->data);
				break;
			case 11:
				traverseStart();
				break;
			case 12:
				traverseEnd();
				break;
			case 13:
				clrscr();
				traverseStart();
				break;
			case 14:
				exit(1);
				break;
			default:
				printf("\n14 Option hi hai Sir\4");
		}
	}
}