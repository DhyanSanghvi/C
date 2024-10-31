/*Write a C++ program to declare a class COLLEGE with
members as college code. Derive a new class as STUDENT
with members as studid. Accept and display details of student
along with college for one object of student.*/
#include<iostream>
using namespace std;
class  college{
	int code;
	public:
		void accept1(){
			cout<<"\nEnter the college code:";
			cin>>code;
		}
		void display1(){
			cout<<"\nDetails:";
			cout<<"\nCollege Code:"<<code;
		}
};
class student:public college{
	int studId;
	public:
		void accept(){
			accept1();
			cout<<"Enter Student Id:";
			cin>>studId;
		}
		void display(){
			display1();
			cout<<"\nStudent Id:"<<studId;
		}
};
int main(){
	student s;
	s.accept();
	s.display();
	return 0;
}
