/*#include<stdio.h>
#include<conio.h>
#include<string.h>
/*void main()
{
   char a;
   int n ;
   clrscr();
   printf("enter any alphabet :");
   scanf("%c",&a);
   if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||
      a=='A'||a=='E'||a=='I'||a=='O'||a=='U')

	printf("It is a vowewl ");
   else
   printf("It is a consonant ");
   getch();
} 
void main()
{
   char str[100];
   int n,i ;
   clrscr();
   printf("enter any string :");
   fflush(stdin);
   gets(str);
   n=strlen(str);
   printf("\nVowel=");
   for(i=0;i<n;i++)
   {
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
	str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
	   printf("%c",str[i]);
   }

   getch();
}*/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*link;
};
int main()
{
	clrscr();
	struct node *prev,*current;
	int pos;
	struct node *ptr;
	struct node *ptr1;
	struct node *head=(struct node*)malloc(sizeof (struct node)),
	*first=(struct node*)malloc(sizeof(struct node)),
	*second=(struct node*)malloc(sizeof(struct node));

	//head=NULL;
	head->data=60;
	head->link=NULL;

	printf("%d",head->data);

	first->data=20;
	first->link=NULL;
	head->link=first;
	printf(" %d",first->data);

	second->data=10;
	second->link=NULL;
	first->link=second;
	printf(" %d",second->data);

	printf("\nYour Linked List:");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}

	printf("\nEnter the pos:");
	scanf("%d",&pos);
	ptr=head;
	while(pos!=1)
	{
		prev=ptr;
		ptr=ptr->link;
		pos--;

	}
	prev->link=ptr->link;
	free(ptr);

	printf("AFTER DELETION:");
	ptr1=head;
	while(ptr1!=NULL)
	{
		printf("%d ",ptr1->data);
		ptr1=ptr1->link;
	}
	getch();
}
