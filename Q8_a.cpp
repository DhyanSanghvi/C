/*Write a C++ program to overload “+” operator so that it
will perform concatenation of two strings. (Use class get
data function to accept two strings)*/
#include<iostream>
using namespace std;
class s
{
	char str[1000];
	public:
		void accept()
		{
			cout<<"\nEnter String:";
			cin>>str;
		}
		s operator+(const s&s2)
		{
			s s3;
			int i=0,j=0;
			while(this->str[i]!='\0')
				s3.str[j++]=this->str[i++];
				j=0;
			while(s2.str[j]!='\0')
				s3.str[i++]=s2.str[j++];
			s3.str[i]='\0';
			return s3;
		}
		void display()
		{
			cout<<str;
		}
};
int main()
{
	s s1,s2,s3;
	s1.accept();
	s2.accept();
	s3=s1+s2;
	s3.display();
}

