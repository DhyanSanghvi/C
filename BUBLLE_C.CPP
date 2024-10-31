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

	//sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(str[j]>str[j+1])
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	//printing sorted array
		printf("\nSorted:%s",str);
	getch();
}