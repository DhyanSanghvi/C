/*Write a C++ program to find smallest number from two numbers
using friend function. (Hint : use two classes).*/
#include<iostream>
using namespace std;
class B;
class A{
	int x;
	friend void smallest(A,B);
	public:
	A(){
		x=10;
	}
};
class B{
	int y;
	friend void smallest(A,B);
	public:
	B(){
		y=20;
	}
};
void smallest(A obj1,B obj2)
{
	if(obj1.x<obj2.y)
		cout<<obj2.y<<" is Greater";
	else
		cout<<obj1.x<<" is Greater";
}
int main(){
	A a;
	B b;
	smallest(a,b);
	return 0;
}
