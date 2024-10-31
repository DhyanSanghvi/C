#include<stdio.h>
#include<conio.h>
void main()
{
	char str[1000];
	int n,i,j;
	char temp;
	clrscr();
	//accept
	printf("Enter a sentence:");
	gets(str);
	printf("\nOG:%s", str);
	n=0;

	//Length
	while(str[n]!='\0')
		n++;
	printf("\nLenght=%d",n);

	//logic
	for(i=0;i<n;i++)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i]-=32;
		else if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
	}

	//print
	printf("\nNRESULT:%s",str);
	getch();
}