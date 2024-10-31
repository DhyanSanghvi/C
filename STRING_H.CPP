#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	int cmp;
	clrscr();
	printf("Enter First String:");
	gets(str1);
	printf("Length=%d",strlen(str1));
	strcpy(str2,str1);
	printf("\nThe Second String:%s",str2);
	printf("\nThe Reverse:%s",strrev(str1));
	cmp=strcmpi(str1,str2);
	if(cmp==0)
		printf("\nEqual");
	else
		printf("\nNot Equal");
	printf("\nConcat:%s",strcat(str2,str1));
	getch();
}