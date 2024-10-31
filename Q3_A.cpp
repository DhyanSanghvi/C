/*Write a C++ program to create a class STUDENT
The data members of STUDENT class.
Roll_No
Name
Marks
Accept data for five students and display it. */
#include<iostream>
using namespace std;
class Student{
	int rollNo;
	char Name[100];
	double marks;
	public:
		void accept()
		{
			cout<<"\nEnter Roll Number, Name and Marks:";
			cin>>ws;
			cin>>rollNo>>Name>>marks;
		}
		void display()
		{
			cout<<"\nRoll Number:"<<rollNo;
			cout<<"\nName:"<<Name;
			cout<<"\nMarks:"<<marks;
		}
};
int main(){
	Student s[5];
	for(int i=0;i<5;i++){
		cout<<"Enter Details for Student "<<i+1<<":";
		s[i].accept();
	}
	for(int i=0;i<5;i++){
		cout<<"\nDetails for Student "<<i+1<<":";
		s[i].display();
	}
	return 0;
}
