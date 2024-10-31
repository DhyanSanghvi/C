
	#include<stdio.h>
#include<conio.h>
void main()
{
	char str[1000],cpy[1000],*ptr1,*ptr2;
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

	//copy:
	ptr1=&str[0];
	ptr2=&cpy[0];
	for(i=0;i<n;i++,ptr1++,ptr2++)
		*ptr2=*ptr1;
	*ptr2='\0';
	printf("\nCopy:%s",cpy);
	getch();
}