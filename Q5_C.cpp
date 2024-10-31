/*Write a C++ program to declare a class student with members
as roll no, name and department. Declare a parameterised
constructor with default value for department as ‘CO’ to initialize
members of object. Initialize and display data for two students.*/
#include<iostream>
using namespace std;
#include<string>
using namespace std;

class Student {
    int rollNo;
    string name;
    string dept;
    
public:
    Student(int roll, string Name){
		rollNo=roll;
		name=Name;
		dept="CO";
	}
    
    void display() {
        cout << "\nDetails:";
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << dept << endl;
    }
};

int main() {
    Student s1(1, "Dhyan"), s2(2, "Unnati");
    s1.display();
    s2.display();
    return 0;
}

