#include<stdio.h>
#include<conio.h>
#include<string.h>
int cmp(char *a,char *b,int len)
{
	int i,comp=0;
	for(i=0;i<len;i++,a++,b++)
	{
		comp=(*a - *b);
		if(comp!=0)
			return comp;
	}
	return 0;
}
void main()
{
	char a[1000],b[1000];
	int comp,i,len,len1,len2;
	clrscr();
	printf("Enter 2 String :");
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	//Greatest Length
	if(len1<len2)
		len=len2;
	else
		len=len1;
	comp=cmp(a,b,len);
	printf("\nResult:%d",comp);
	getch();
}