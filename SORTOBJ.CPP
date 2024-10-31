#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
class StudDetails
{
	private:
		int rollNo;
		char name[50];
		float marks;
	public:
		void accept()
		{
			cout<<"\nEnter RollNo , Name & Marks:";
			cin>>rollNo>>name>>marks;
		}
		int getRollNo()
		{
			return rollNo;
		}
		char getName(int i)
		{
			return name[i];
		}
		float getMarks()
		{
			return marks;
		}
		void display()
		{
			cout<<"RollNo:"<<rollNo<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Marks:"<<marks<<endl;
		}
};
void main()
{
	clrscr();
	int n=3,i;
	/*cout<<"Enter the number of Students:";
	cin>>n;*/
	StudDetails s[3];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Deatils for Student"<<i+1<<":";
		s[i].accept();
	}
	clrscr();
	cout<<"\nBefore Sorting:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\nDetails of student"<<i+1<<":"<<endl;
		s[i].display();
	}
	int choice;
	while(1)
	{
		clrscr();
		cout<<"----------MENU----------";
		cout<<"\n1.Sort By RollNo\n2.Sort By Name\n3.Sort By Marks\n4.Exit";
		cout<<"\nEnter Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				for(i=0;i<n-1;i++)
				{
					if(s[i].getRollNo()>s[i+1].getRollNo())
					{
						StudDetails temp=s[i];
						s[i]=s[i+1];
						s[i+1]=temp;
					}
				}
				break;
			case 2:
				for(i=0;i<n-1;i++)
				{
					int  index=0;
					while(s[i].getName(index)==s[i+1].getName(index))
						index++;
					if(s[i].getName(index)>s[i+1].getName(index))
					{
						StudDetails temp=s[i];
						s[i]=s[i+1];
						s[i+1]=temp;
					}
				}
				break;
			case 3:
				for(i=0;i<n-1;i++)
				{
					if(s[i].getMarks()>s[i+1].getMarks())
					{
						StudDetails temp=s[i];
						s[i]=s[i+1];
						s[i+1]=temp;
					}
				}
				break;
			case 4:
				exit(1);
			default:
				cout<<"Wrong Choice!!";

		}
		cout<<"\nAfter Sorting:"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<"\nDetails of student"<<i+1<<":"<<endl;
			s[i].display();
		}
		getch();
	}
}