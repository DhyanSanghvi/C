/*Write a C++ program to implement following in heritance.
Refer Figure No. 2.
Class : College Student
 student id
Data mem : College_code
Class : Result
Class : test
data mem : percentage
Class : sports
data mem : grade*/
#include<iostream>
using namespace std;
class collegeStudent{
	int studentId,collegeCode;
	public:
		void accept1(){
			cout<<"Enter Student Id and College Code:";;
			cin>>studentId>>collegeCode;
		}
		void display1()
		{
			cout<<"\nDetails:";
			cout<<"\nStudent ID:"<<studentId;
			cout<<"\nCollege Code:"<<collegeCode;
		}
};
class test:virtual public collegeStudent{
	double percentage;
	public:
		void accept2(){
			cout<<"Enter your percentage:";
			cin>>percentage;
		}
		void display2(){
			cout<<"\nPercentage:"<<percentage;
		}
};
class sports:virtual public collegeStudent{
	char grade[100];
	public:
		void accept3(){
			cout<<"Enter your Grade:";
			cin>>ws;
			cin>>grade;
		}
		void display3(){
			cout<<"\nGrade:"<<grade;
		}
};
class result:public test,public sports{
	public:
		void accept(){
			accept1();
			accept2();
			accept3();
		}
		void display()
		{
			display1();
			display2();
			display3();
		}
};
int main()
{
	result r;
	r.accept();
	r.display();
	return 0;
}
