/*Write a C++ program to swap two integer numbers and swap
two float numbers using function overloading.
(Hint : overload swap function)*/
#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void swap(float &a,float &b)
{
	float temp=a;
	a=b;
	b=temp;
}
void main()
{
	clrscr();
	int a,b;
	float fa,fb;
	cout<<"\nEnter 2 int numbers:";
	cin>>a>>b;
	cout<<"\nBefore Swapping:"<<"\na:"<<a<<"\nb:"<<b;
	swap(a,b);
	cout<<"\nAfter Swapping:"<<"\na:"<<a<<"\nb:"<<b;
	cout<<"\nEnter 2 float numbers:";
	cin>>fa>>fb;
	cout<<"\nBefore Swapping:"<<"\na:"<<fa<<"\nb:"<<fb;
	swap(fa,fb);
	cout<<"\nAfter Swapping:"<<"\na:"<<fa<<"\nb:"<<fb;
	getch();
}