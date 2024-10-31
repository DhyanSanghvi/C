#include<stdio.h>
#include<conio.h>
void main()
{
	char str[1000],temp,*ptr1,*ptr2;
	int i,len=0;

	ptr1=&str[0];
	printf("\nEnter a string:");
	gets(ptr1);

	ptr1=&str[0];
	printf("\nYour String:%s",ptr1);

	//Length:
	ptr1=&str[0];
	while(*ptr1!='\0')
	{
		len++;
		ptr1++;
	}
	printf("\nLength =%d",len);

	//Reverse:
	ptr1=&str[0];
	ptr2=&str[len-1];
	for(i=0;i<len/2;i++)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2--;
	}
	ptr1=&str[0];
	printf("\nReversed String:%s",ptr1);

	getch();
	clrscr();

}