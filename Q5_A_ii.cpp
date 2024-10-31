/*Write a program in C++ to overload unary ‘_’ operator
to negate values of data members of class.*/
#include<iostream>
#include<cmath>
using namespace std;
class Over{
	int x;
	public:
		void accept(){
			cout<<"\nEnter a value:";
			cin>>x;
		}
		void operator-(){
			if(this->x<0)		
				this->x=abs(this->x);
			else
				this->x=-this->x;
		}
		void display()
		{
			cout<<x;
		}
};
int main()
{
	Over o;
	o.accept();
	-o;
	cout<<"Result:";
	o.display();
	return 0;
}
