#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],rev[100];
	clrscr();
	int len,i,j;
	printf("Enter a sentence:");
	gets(str);
	len=0;
	while(str[len]!='\0')
		len++;
	printf("Len=%d\n",len);
	j=len-1;
	for(i=0;i<len;i++,j--)
		rev[i]=str[j];
	rev[i]='\0';
	printf("Reverse:%s",rev);
	getch();
}