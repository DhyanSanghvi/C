#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i,j;
	char str[1000],temp,*ptr1,*ptr2;
	clrscr();
	printf("\nEnter a Sentence:");
	gets(str);
	len=strlen(str);
	printf("\nLength=%d",len);

	//Right Trim:
	ptr1=&str[len-1];
	while(ptr1>0 && *ptr1==' ')
	{
		ptr1--;
	}
	ptr1++;
	*ptr1='\0';
	len=strlen(str);
	printf("\nRight trimed String:%s",str);
	getch();
}