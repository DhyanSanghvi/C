#include<stdio.h>
#include<conio.h>
typedef struct employee{
	char name[100];
	int id;
	int age;
};emp;
void main()
{
     emp s[3];
     int i;
     for(i=0;i<3;i++)
     {
	printf("Enter name id and age of employee %d",(i+1));
	gets(e[i].name);
	scanf("%d".&s[i].id);
	scanf("%d".&s[i].age);
     }
     clrscr();
     for(i=0;i<3;i++)
     {
	printf("Details of employee %d",(i+1));
	printf("Name:%s",s[i].name);
	printf("Id=%d",s[i].id);
	printf("Age=%d",s[i].age);
     }
}