#include<stdio.h>
#include<conio.h>
#define max 10000
void main()
{
	int i,len1=0,len2=0;
	clrscr();
	char arr1[max],arr2[max];
	printf("Enter the first string:");
	scanf("%s",&arr1);
	//gets(arr1);
	printf("Enter the second string:");
	scanf("%s",&arr2);
	//gets(arr2);
	printf("String 1 is:");
	printf("%s",arr1);
	printf("\nString 2 is:");
	printf("%s",arr2);																										;
	while(arr1[len1]!='\0')
		len1++;
	while(arr2[len2]!='\0')
		len2++;
	printf("\nLenght 1 is %d \nLenght of 2 is %d",len1,len2);
	//Actual Logic
	if(len1!=len2)
		printf("\nThey can nit be equal since their lenghts are different");
	else
	{
		for(i=0;i<len1;i++)
		{
			if(arr1[i]<='Z' && arr1[i]>='A')
				arr1[i]+=32;
			if(arr2[i]<='Z' && arr2[i]>='A')
				arr2[i]+=32;
		}
		printf("\n%s\n%s",arr1,arr2);
		for(i=0;i<len1;i++)
		{
			if(arr1[i]!=arr2[i])
				break;
		}
		if(i<len1)
			printf("\nThey are NOT Equal");
		else
			printf("\nThey are EQUAL");
	}
	getch();
}
