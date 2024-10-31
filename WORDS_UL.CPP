#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int len=0,i,j,ShiftFrom=0,ShiftTo=0,start=0,end=0,lenSub=0,mid=0;
	char str[1000],temp;
	clrscr();
	printf("\nEnter a Sentence:");
	gets(str);

	//length
	len=strlen(str);
	printf("\nLength=%d",len);

	//left trim
	i=0;
	while(i<len && str[i]==' ')
		i++;
	for(j=0;i<len;j++,i++)
	{
		str[j]=str[i];
	}
	str[j]='\0';
	len=strlen(str);

	//Right Trim
	i=len-1;
	while(i>0 && str[i]==' ')
		i--;
	str[i+1]='\0';
	len=strlen(str);

	//sanitize:
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
	len=strlen(str);
	printf("\nCleaned statement:%s",str);

	//Reversing the whole string:
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	printf("\nREVERSED:%s",str);

	//Reversing each word:
	start=0;
	for(i=0;i<len;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			end=i-1;
			lenSub=end-start+1;
			mid=lenSub/2+start;
			for(j=start;j<mid;j++,end--)
			{
				temp=str[j];
				str[j]=str[end];
				str[end]=temp;
			}
			start=i+1;
		}
	}
	printf("\nResult=%s",str);
	getch();
}