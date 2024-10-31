#include<stdio.h>
#include<conio.h>
void main()
{
	char str[1000],cpy[1000];
	int n,i;
	clrscr();
	//accept
	printf("Enter a sentence:");
	gets(str);
	printf("%s", str);
	n=0;

	//Length
	while(str[n]!='\0')
		n++;

	//copy
	for(i=0;i<n;i++)
		cpy[i]=str[i];
	printf("\n Copy:%s",cpy);
	getch();
}