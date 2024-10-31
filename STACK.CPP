#include<iostream.h>
#include<conio.h>
#define MAX 10
#define NEG_INF -32768
class Stack
{
	private:
	int top;
	int items[MAX];
	isFull(){return top==MAX-1;}
	isEmpty(){return top==-1;}
	public:
		Stack()
		{
			top=-1;
		}
		void push(int ele)
		{
			if(isFull())
			{
				cout<<"\nStack Overflow!!";
				return ;
			}
			items[++top]=ele;
			cout<<"\nElement Insert\2";
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"\nThere is Nothing to push";
				return NEG_INF;
			}
			return items[top--];
		}
		void show()
		{
			if(isEmpty())
			{
				cout<<"\nStack is Empty , Nothing to show";
				return ;
			}
			cout<<"\nYour Stack contains:";
			for(int i=top;i>=0;i--)
			{
				cout<<items[i]<<" ";
			}
		}
};
void main()
{
	clrscr();
	Stack s1;
	int ele;
	s1.push(10);
	s1.show();
	getch();
	s1.push(20);
	s1.show();
	getch();
	s1.push(30);
	s1.show();
	getch();
	s1.push(40);
	s1.show();
	getch();
	s1.push(50);
	s1.show();
	getch();
	s1.push(60);
	s1.show();
	getch();
	ele=s1.pop();
	cout<<"\nPopped:"<<ele;
	s1.show();
	getch();
}