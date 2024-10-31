#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[1000],ch;
int i,len,cnt=0;
printf("enter string bkl:");
fflush(stdin);

gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
if (str[i]>'\0' && str[i]<'Ā')
{
cnt++;
}
}

printf("itne characters hai gandudududdu:%d",cnt);
/*for(i=0;i<128;i++)
{
	printf("%c ",i);
} */
getch();
}