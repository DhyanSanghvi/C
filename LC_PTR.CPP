#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[100],*ptr1;
	int len1,i;
	clrscr();
	printf("Enter first Sentence:");
	gets(str1);
	len1=strlen(str1);
	ptr1=&str1[0];
	for(i=0;i<len1;i++,ptr1++)
	{
		if(*ptr1>='A' && *ptr1<='Z')
			*ptr1+=32;
	}
	printf("lowercase	:%s",str1);
	getch();
}