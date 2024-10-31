#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[1000],str2[1000];
	int cmp;
	clrscr();
	printf("Enter a string:");
	gets(str1);
	strcpy(str1,str2);
	strrev(str1);
	cmp=strcmpi(str2,str1);
	if(cmp==0)
		printf("Palin");
	else
		printf("Not Palin");
	getch();
}