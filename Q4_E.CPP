/*Write a C++ program to find greatest number among two
numbers from two different classes using friend function*/
#include <iostream.h>
#include <conio.h>
class B;
class A 
{
	int num1;
	public:
	A(int n)
	{
		num1=n;
	}
	friend void Greatest(A, B);
};

class B
{
	int num2;
	public:
	B(int n)
	{
		num2=n;
	}
	friend void Greatest(A, B);
};

void Greatest(A objA, B objB) {
    if (objA.num1 > objB.num2)
	cout << "The greatest number is: " << objA.num1 << endl;
    else
	cout << "The greatest number is: " << objB.num2 << endl;
}

void main()
{
    clrscr();
    A objA(10);
    B objB(20);
    Greatest(objA, objB);
    getch();
}

