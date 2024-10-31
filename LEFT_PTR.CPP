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

	//logic
	i=0;
	ptr1=&str[0];
	ptr2=&str[0];
	while(i<len && *ptr1==' ')
	{
		*ptr1++;
		i++;
	}
	for(;i<len;i++,ptr1++,ptr2++)
	{
		*ptr2=*ptr1;
	}
	*ptr2='\0';
	printf("\nLeft Trimed String:%s",str);
	len=strlen(str);
	getch();
}