#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,i,j;
	char str[1000],rev[1000],*ptr1,*ptr2;
	clrscr();
	printf("\nEnter a word:");
	gets(str);
	printf("\nEntered word:%s",str);
	//length
	while(str[len]!='\0')
		len++;
	printf("\nLength=%d",len);
	//logic:
	ptr1=&str[len-1];
	ptr2=&rev[0];
	for(i=0;i<len;i++,ptr1--,ptr2++)
		*ptr2=*ptr1;
	printf("\nReverse:%s",rev);

	ptr1=&str[0];
	ptr2=&rev[0];
	for(i=0;i<len;i++,ptr1++,ptr2++)
	{
		if(*ptr1>='a' && *ptr1<='z')
			*ptr1-=32;
		if(*ptr2>='a' && *ptr2<='z')
			*ptr2-=32;
	}

	ptr1=&str[0];
	ptr2=&rev[0];
	for(i=0;i<len;i++,ptr1++,ptr2++)
	{
		if(*ptr2!=*ptr1)
			break;
	}
	if(i<len)
		printf("\n%s is a not palindrome",str);
	else
		printf("\n%s is a palindrome",str);
	getch();
}