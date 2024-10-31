#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i;
	char str[1000],*ptr1,*ptr2;
	printf("Enter a sentence:");
	gets(str);
	len=strlen(str);
	ptr=&str[0];
	for(i=0;i<len;i++,ptr1++)
	{
		if(*ptr1==' ')
		{
			ptr2=ptr1+1;
			if(*ptr2>='a' && *ptr2<='z')
				*ptr2-=32;
		}
	}
	printf("Result:%s",str);
}