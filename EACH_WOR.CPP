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
		if(str[i]==' ' && (str[i+1]>='a'&&str[i+1]<='z'))
			str[i+1]-=32;

	}
	printf("RESULT:%s",str);
	getch();
}