#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i;
	char str[1000],*ptr1,*ptr2,*ShiftFrom=0,*ShiftTo=0;
	clrscr();
	printf("\nEnter a Sentence:");
	gets(str);
	len=strlen(str);
	printf("\nLength=%d",len);
	//Logic:
	for(ptr1=&str[0];*ptr1!='\0';ptr1++)
	{
		ptr2=ptr1+1;
		if(*ptr1==' ' && *ptr2==' ')
		{
			ShiftFrom=ptr1+2;
			while(*ShiftFrom==' ')
				ShiftFrom++;
			for(ShiftTo=ptr1+1;*ShiftFrom!='\0';ShiftTo++,ShiftFrom++)
			{
				*ShiftTo=*ShiftFrom;
			}
			*ShiftTo='\0';
		}
	}
	printf("\nSanitized String:%s",str);
	getch();
}