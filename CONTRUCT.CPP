#include<iostream.h>
#include<conio.h>

class Sample
{
	int intvar;
	float floatvar;
	public:
		Sample()//Default Constructor
		{
			cout<<"\nConstructor Invoked!";
			intvar=0;
			floatvar=0;
		}
		Sample(int a)//Parameterised Constructour
		{
			cout<<"\nInt Parameterised Constructor";
			intvar=a;
			floatvar=0;
		}
		Sample(float f)
		{
			cout<<"\nFloat parameterised constructor";
			intvar=0;
			floatvar=f;
		}
		Sample(int a,float b)
		{
			cout<<"\nParameterised constructor with 2 args";
			intvar=a;
			floatvar=b;
		}
		Sample(Sample &obj)
		{
			cout<<"Copy Constructor called";
			intvar=obj.intvar;
			floatvar=obj.floatvar;
		}
		~Sample()
		{
			cout<<"\nDestructor called";
		}
		void display()
		{
			cout<<"\n\nInt Variable="<<intvar;
			cout<<"\nFloat Variable="<<floatvar;
		}
};
void main()
{
	{
	clrscr();
	Sample s1(10),s2(3.14f),s3(6,9.420),s4(s3);
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	}
	getch();
}
