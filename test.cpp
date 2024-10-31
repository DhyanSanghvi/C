#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"A\n";
		}
};
class B:public A{
	public:
		void display(){
			cout<<"B\n";
		}
};
int main(){
	B b;
	b.display();
	b.A::display();
	b.B::display();
	return 0;
}
