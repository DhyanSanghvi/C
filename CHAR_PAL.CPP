#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,i,j;
	char str[1000],rev[1000],temp;
	clrscr();
	printf("\nEnter a word:");
	gets(str);
	printf("\nEntered word:%s",str);
	//length
	while(str[len]!='\0')
		len++;
	printf("\nLength=%d",len);
	//logic
	for(i=0;i<len;i++)
		rev[i]=str[i];

	for(i=0;i<len/2;i++)
	{
		temp=rev[i];
		rev[i]=rev[len-i-1];
		rev[len-i-1]=temp;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i]-=32;
		if(rev[i]>='a' && str[i]<='z')
			rev[i]-=32;
	}
	for(i=0;i<len;i++)
	{
		if(rev[i]!=str[i])
			break;
	}
	if(i<len)
		printf("\n%s is a not palindrome",str);
	else
		printf("\n%s is a palindrome",str);
	getch();
}