#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define max 10000
void main()
{
	int i=0,len=0,flag=0,j,cnt=0;
	char str[max],temp,*ptr1,*ptr2;
	clrscr();
	printf("Enter a String:");
	gets(str);

	while(str[len]!='\0')
		len++;
	//actual logic:
	ptr1=&str[0];
	ptr2=&str[1];
	flag=1;
	for(i=0;i<len-1 && flag==1;i++)
	{
		flag=0;
		for(j=0;j<len-i-1;j++,ptr1++,ptr2++)
		{
			if(*ptr1>*ptr2)
			{
				temp=*ptr1;
				*ptr1=*ptr2;
				*ptr2=temp;

				flag=1;
			}
		}
		ptr1=&str[0];
		ptr2=&str[1];
	}
	printf("\nCount:%d",cnt);
	printf("\nSorted array:");
	puts(str);
	getch();
}