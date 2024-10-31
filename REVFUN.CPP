#include<stdio.h>
#include<conio.h>
#include<string.h>
void strrev(char *og, char *rev, int len)
{
	int i=0;
	for(;i<len;i++,rev++,og--)
	{
		*rev=*og;
	}
	*rev='\0';
}
void main()
{
	char og[1000],rev[1000];
	int len;
	clrscr();
	printf("Enter a sentence:");
	fflush(stdin);
	gets(og);
	len=strlen(og);
	printf("Length:%d",len);
	strrev(&og[len-1],&rev[0],len);
	printf("\nREVERSED String:%s",rev);
	getch();
}