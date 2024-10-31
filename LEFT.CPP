#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i,j;
	char str[1000],temp;
	clrscr();
	printf("\nEnter a Sentence:");
	gets(str);
	len=strlen(str);
	printf("\nLength=%d",len);

	//logic
	i=0;
	while(i<len && str[i]==' ')
		i++;
	for(j=0;i<len;j++,i++)
	{
		str[j]=str[i];
	}
	str[j]='\0';
	printf("\nLeft Trimed String:%s",str);
	len=strlen(str);
	getch();
}











































































