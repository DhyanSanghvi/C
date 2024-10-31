/*Write a C++ program to find whether the entered number
is even or odd.*/
#include <iostream.h>
#include <conio.h>

void main() 
{
	clrscr();
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "The number " << num << " is even." << endl;
	}
	else
	{
		cout << "The number " << num << " is odd." << endl;
	}
    getch();
}

