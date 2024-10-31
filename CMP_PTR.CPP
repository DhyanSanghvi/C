#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	char *ptr1,*ptr2;
	int len1,len2,i;
	clrscr();
	printf("Enter first Sentence:");
	gets(str1);
	printf("Enter Second Sentence:");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	ptr1=&str1[0];
	ptr2=&str2[0];
	if(len1==len2)
	{
		for(i=0;i<len1;i++,ptr1++,ptr2++)
		{
			if(*ptr1!=*ptr2)
				break;
		}
		if(i<len1)
			printf("Not Equal");
		else
			printf("Equal");
	}
	else
		printf("Not Equal!");
	getch();
}