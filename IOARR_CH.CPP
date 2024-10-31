#include<stdio.h>
#include<conio.h>
#define max 1000
void main()
{
	char ch[max];
	clrscr();
	printf("Enter Your Name:");
	//scanf("%s",&ch);
	//gets(ch);
	//scanf("%[^p]s",&ch);
	ch[0]='U';
	ch[1]='n';
	ch[2]='n';
	ch[3]='u';
	ch[4]=' ';
	ch[5]='D';
	ch[6]='h';
	ch[7]='y';
	ch[8]='a';
	ch[9]='n';

	printf("\nWelcome %s",ch);
	getch();
}