#include<stdio.h>
#include<conio.h>
main()
{
 char ch;
 int i,c;
 printf("Enter anything: ");
 scanf("%c",&ch);
 if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
  printf("%c is a letter",ch);
 else
  printf("Not a letter");
 getch();
 clrscr();
}
