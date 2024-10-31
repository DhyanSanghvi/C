#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str2[1000],str1[1000],*ptr1,*ptr2;
	int i,len1=0,len2=0;
	clrscr();

	ptr1=&str1[0];
	ptr2=&str2[0];
	printf("Enter 2 Strings:");
	gets(ptr1);
	gets(ptr2);

	ptr1=&str1[0];
	ptr2=&str2[0];
	printf("\nFirst String:%s",ptr1);
	printf("\nSecond String:%s",ptr2);

	//Length:
	len1=strlen(str1);
	len2=strlen(str2);

	//Logic:
	ptr1=&str1[len1];
	ptr2=&str2[0];
	for(i=0;i<len2;i++,ptr1++,ptr2++)
		*ptr1=*ptr2;
	*ptr1='\0';
	ptr1=&str1[0];
	printf("\nConcated String:%s",ptr1);

	getch();
}
