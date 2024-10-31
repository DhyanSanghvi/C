#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i,ShiftFrom=0,ShiftTo=0;
	char str[1000];
	clrscr();
	printf("\nEnter a Sentence:");
	gets(str);
	len=strlen(str);
	printf("\nLength=%d",len);
	//Logic:
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ' && str[i+1]==' ')
		{
			ShiftFrom=i+2;
			while(str[ShiftFrom]==' ')
				ShiftFrom++;
			for(ShiftTo=i+1;str[ShiftFrom]!='\0';ShiftTo++,ShiftFrom++)
			{
				str[ShiftTo]=str[ShiftFrom];
			}
			str[ShiftTo]='\0';
		}
	}
	printf("\nSanitized String:%s",str);
	getch();
}