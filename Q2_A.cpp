#include<iostream>
using namespace std;
int main()
{
	int x,fact=1;
	cout<<"\nEnter a number:";
	cin>>x;
	for(i=x;i>0;i++)
		fact*=i;
	cout<<"Factorial:"<<fact;
}
