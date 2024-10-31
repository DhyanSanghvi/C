/*Write a program to swap two integers using call by reference
method.*/
#include <iostream>
using namespace std;
void swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout<<"\nBefore swapping: num1 = "<<num1<<", num2 = "<<num2;
    swap(num1, num2);
    cout<<"\nAfter  swapping: num1 = "<<num1<<", num2 = "<<num2;
    return 0;
}

