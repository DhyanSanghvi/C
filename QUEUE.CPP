#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
class Queue
{
	private:
		int items[MAX],front,rear,count;
		isEmpty(){return count==0;}
		isFull(){return count==MAX;}
	public:
		Queue()
		{
			front=0;
			count=0;
			rear=-1;
		}
		void insert(int ele)
		{
			if(isFull())
			{
				cout<<"\nQueue Full Cannot Insert\3";
				return ;
			}
			if(rear==MAX-1)
				rear=-1;
			items[++rear]=ele;
			count++;
			cout<<"\nElement Inserted\2";
		}
		void poll()
		{
			if(isEmpty())
			{
				cout<<"\nQueue Empty, Nothing to poll\3";
				return ;
			}
			if(front==MAX-1)
				front=0;
			count--;
			int poped=items[front++];
			cout<<"Deleted Element:"<<poped;
		}
		void show()
		{
			int i;
			if(isEmpty())
			{
				cout<<"\nQueue Empty , Nothing to Show\3";
				return ;
			}
			cout<<"\nYour Queue Contains:";
			if(rear<front)
			{
				for(i=front;i<MAX;i++)
					cout<<items[i]<<" ";
				for(i=0;i<=rear;i++)
					cout<<items[i]<<" ";
			}
			else
			{
				for(int i=front;i<=rear;i++)
					cout<<items[i]<<" ";
			}
		}
};
void main()
{
	Queue q;
	int choice;
	clrscr();
	while(1)
	{
		cout<<"\n----------MENU----------";
		cout<<"\n1.Insert\n2.Poll\n3.Clear & Show\n4.Exit";
		cout<<"\nEnter Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int ele;
				cout<<"\nEnter Element to be inserted:";
				cin>>ele;
				q.insert(ele);
				break;
			case 2:
				q.poll();
				break;
			case 3:
				clrscr();
				q.show();
				break;
			case 4:
				exit(1);
			default:
				cout<<"\n4 hi option hai gandu!!";
		}

	}
}