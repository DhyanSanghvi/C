#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Null 0

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

Node *start=Null;

Node *createNode(int x)
{
	Node *pnode;
	pnode=(Node *)malloc(sizeof(Node));
	if(pnode==Null)
	{
		printf("Memory Overflow!!");
		return Null;
	}
	pnode->data=x;
	pnode->next=Null;

	return pnode;
}

void insertAtBeg(int x)
{
	Node *pnode=createNode(x);
	if(pnode!=Null)
	{
		pnode->next=start;
		start=pnode;
		printf("\nNode Inserted");
	}
}
void insertAtEnd(int x)
{
	Node *current;
	Node *pnode=createNode(x);
	if(pnode!=Null)
	{
		if(start==Null)
			start=pnode;
		else
		{
			current = start;
			while(current -> next !=Null)
				current = current->next;
			current->next=pnode;
		}
		printf("\nNode Inserted");
	}
}

void insertAfter(int x,int key)
{
	Node *pnode,*current;

	if(start==Null)
	{
		printf("\nList is Empty, cannot Insert");
		return ;
	}
	current=start;
	while(current!=Null && current->data!=key)
		current=current->next;
	if(current==Null)
	{
		printf("\n%d Element not found, connot Insert!!",key);
		return ;
	}
	pnode=createNode(x);
	pnode->next=current->next;
	current->next=pnode;
	printf("\nNode Inserted");
}

void insertBefore(int x,int key)
{
	Node *pnode,*current,*follow;

	if(start==Null)
	{
		printf("\nList Empty Cannot insert!!");
		return ;
	}
	current=start;
	follow=Null;

	while(current!=Null && current->data!=key)
	{
		follow=current;
		current=current->next;
	}
	if(current==Null)
	{
		printf("\n%d Not fpund Cannot Insert!!");
		return ;
	}
	pnode=createNode(x);
	pnode->next=current;
	if(current==start)
		start=pnode;
	else
		follow->next=pnode;
	printf("\nNode Inserted");
}

void insertAtPos(int x,int pos)
{
	int i;
	Node *pnode,*current,*follow;
	current=start;
	for(i=0;i<pos && current!=Null;i++)
	{
		follow=current;
		current=current->next;
	}
	pnode=createNode(x);
	if(pos==1)
	{
		pnode->next=start;
		start=pnode;
		printf("\nNode Inserted");
	}
	else if(i==pos)
	{
		pnode->next=current;
		follow->next=pnode;
		printf("\nNode Inserted");
	}
	else
	{
		free(pnode);
		printf("\n%d position out of range, cannot Insert",pos);
	}
}
void deleteFromBeg()
{
	Node *current;
	if(start==Null)
	{
		printf("\nlink list Empty");
		return ;
	}
	current=start;
	start=start->next;

	printf("\nDeleting %d :",current->data);
	free(current);
}

void deleteFromEnd()
{
	Node *current,*follow;

	if(start==Null)
	{
		printf("\nlink list Empty");
		return ;
	}
	current=start;
	follow=Null;

	while(current->next!=Null)
	{
		follow=current;
		current=current->next;
	}
	if(current==start)
		start=Null;
	else
		follow->next=Null;
	printf("\nDeleting:%d",current->data);
	free(current);
}

void deleteElement(int x)
{
	Node *current,*follow;
	if(start==Null)
	{
		printf("\nlink list Empty");
		return ;
	}
	current=start;
	follow=Null;

	while(current!=Null && current->data!=x)
	{
		follow=current;
		current=current->next;
	}
	if(current==Null)
	{
		printf("%d not found cannot be deleted!!",x);
		return ;
	}
	if(current==start)
		start=start->next;
	else
		follow->next=current->next;
	printf("Deleting:%d",current->data);
	free(current);
}

void deletePos(/*int x,int pos*/)
{
	Node *current,*follow;

	if(start==Null)
	{
		printf("\nlink list Empty , cannot delete!!");
		return ;
	}







}
void search(int x)
{
	Node *current;

	if(start==Null)
	{
		printf("\nList is Empty cannot search!!");
		return ;
	}
	current=start;

	while(current!=Null && current->data!=x)
		current=current->next;
	if(current==Null)
		printf("\n%d Element not found , Cannot delete!!");
	else
		printf("\n%d found!!!",x);

}

void traverse()
{
	Node *current;

	if(start==Null)
	{
		printf("\nlink list Empty");
		return ;
	}
	current=start;
	printf("\nLinked List Contains:");
	while(current!=Null)
	{
		printf("%d ",current->data);
		current=current->next;
	}
}

void reverse()
{
	Node *current,*follow,*ahead;

	if(start==Null)
	{
		printf("\nlink list Empty");
		return ;
	}
	current=start;
	follow=Null;

	while(current!=Null)
	{
		ahead=current->next;
		current->next=follow;
		follow=current;
		current=ahead;
	}
	start=follow;
	printf("\nLinked List Reversed!!");
}

void main()
{
	int choice,ele,x;
	clrscr();

	while(1)
	{
		printf("\n----------MENU----------");
		printf("\n1.insert at beg\n2.Insert At End\n3.Insert After\n4.Insert Before\n5.Insert At Position\n6.delete from Beg\n7.Delete From End\n8.Delete Element\n9.Delete Poition\n10.Search\n11.Taverse\n12.Reverse\n13.exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Enter Element:");
				scanf("%d",&ele);
				insertAtBeg(ele);
				break;
			case 2:
				printf("Enter Element:");
				scanf("%d",&ele);
				insertAtEnd(ele);
				break;
			case 3:
				printf("Enter Element:");
				scanf("%d",&ele);
				printf("\nEnter the 'After' element:");
				scanf("%d",&x);
				insertAfter(ele,x);
				break;
			case 4:
				printf("Enter Element:");
				scanf("%d",&ele);
				printf("\nEnter the 'Before' element:");
				scanf("%d",&x);
				insertBefore(ele,x);
				break;
			case 5:
				printf("Enter Element:");
				scanf("%d",&ele);
				printf("\nEnter the Postion to add element:");
				scanf("%d",&x);
				insertAtPos(ele,x);
				break;
			case 6:
				deleteFromBeg();
				break;
			case 7:
				deleteFromEnd();
				break;
			case 8:
				printf("Enter Element:");
				scanf("%d",&ele);
				deleteElement(ele);
				break;
			case 9:
			break;
			case 10:
				printf("\nEnter element:");
				scanf("%d",&ele);
				search(ele);
				break;
			case 11:
				traverse();
				break;
			case 12:
				reverse();
				break;
			case 13:
				exit(0);
		}
	}

}