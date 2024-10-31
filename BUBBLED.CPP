#include<stdio.h>
#include<conio.h>
#define max 10000
void main()
{
	int i=0,n=0,flag=0,j,temp,cnt=0;
	int arr[max];
	clrscr();
	printf("Enter the number of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Your array contains: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	//LOGIC
	flag=1;
	for(i=0;i<n-1 && flag==1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

				flag=1;
			}
		}
	}
	printf("\nSorted Array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int RollNo;
	char name[50];
	float perc;
};
void main()
{
	struct student s[100],temp;
	int i,j,n;
	clrscr();
	//printf("Enter the number of students:");
	//scanf("%d",&n);

	//Accepting stucture details
	for(i=0;i<n;i++)
	{
		printf("Enter details for student %d:",(i+1));
		printf("\nRollNo:");
		fflush(stdin);
		scanf("%d",&s[i].RollNo);
		printf("Name:");
		fflush(stdin);
		scanf("%s",&s[i].name);
		//gets(s[i].name);
		printf("Percentage:");
		fflush(stdin);
		scanf("%f",&s[i].perc);
		//scanf("%d %s %lf",&s[i].RollNo,&s[i].name,&s[i].perc);
	}
	for(i=0;i<n;i++)
	{
		printf("%d %s %lf",s[i].RollNo,s[i].name,s[i].perc);
	}

	//Sorting acc RollNo
	/*for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j].RollNo>s[j+1].RollNo)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	getch();
	clrscr();
	//Displaying acc RollNo
	printf("Details sorted with respect to rollno:\n");
	for(i=0;i<n;i++)
	{
		printf("%d%s%lf",s[i].RollNo,s[i].name,s[i].perc);
	}

	//Sorting acc Name
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmpi(s[j].name,s[j+1].name)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	getch();
	clrscr();
	//Displaying acc name
	printf("Details sorted with respect to Name:\n");
	for(i=0;i<n;i++)
	{
		printf("%d%s%lf",s[i].RollNo,s[i].name,s[i].perc);
	}

	//sorting acc percent
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j].perc>s[j+1].perc)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	getch();
	clrscr();
	//Display acc percent
	printf("Details sorted with respect to Percentage:\n");
	for(i=0;i<n;i++)
	{
		printf("%d%s%lf",s[i].RollNo,s[i].name,s[i].perc);
	} */
	getch();
}