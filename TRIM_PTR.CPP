#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i,j;
	char str[1000],temp,*ptr1,*ptr2,*ShiftFrom,*ShiftTo;
	clrscr();
	printf("\nEnter a Sentence:");
	gets(str);
	len=strlen(str);
	printf("\nLength=%d",len);

	//Left Trim:
	i=0;
	ptr1=&str[0];
	ptr2=&str[0];
	while(i<len && *ptr1==' ')
	{
		*ptr1++;
		i++;
	}
	for(;i<len;i++,ptr1++,ptr2++)
	{
		*ptr2=*ptr1;
	}
	*ptr2='\0';
	len=strlen(str);

	//Right Trim:
	ptr1=&str[len-1];
	while(ptr1>0 && *ptr1==' ')
	{
		ptr1--;
	}
	ptr1++;
	*ptr1='\0';
	len=strlen(str);

	//Sanitize:
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
	printf("\nTrimmed String:%s",str);
	getch();
}