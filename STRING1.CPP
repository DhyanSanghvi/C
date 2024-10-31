#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class String
{
	private:
		char *str;
		int getLen(char arr[])
		{
			int len;
			while(arr[len]!='\0')
				len++;
			return len;
		}

	public:
		String()
		{
			str=new char[16];
			str='\0';
		}
		String(char *s)
		{
			str=new char[getLen(s)+16];
			char **ptr=&str;
			while(*s!='\0')
			{
				*ptr=*s;
				*ptr++;
				s++;
			}
		}
		void lenght()
		{
			char *ptr;
			ptr=str;
			int len;
			while(*ptr++!='\0')
				len++;
			cout<<"Lenght="<<len;
		}
		void charAt(int index)
		{
			char *ptr;
			ptr=str;
			for(int i=0;i<=index;i++)
				ptr++;
			cout<<"\nCharacter At "<<index<<" is : "<<*ptr;
		}
		void display()
		{
			char *ptr;
			ptr=str;
			while(*ptr!='\0')
			{
				cout<<*ptr;
				ptr++;
			}
		}
};
void main()
{
	clrscr();
	String str1("Dhyan");
	str1.display();
	int choice;
	while(1){
	cout<<"\n----------MENU----------";
	cout<<"\n1.Initialize with a string.\n2.Lenght.\n3.CharAt";
	cout<<"\nEnter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			/*char s[100];
			cout<<"Enter the string:";
			cin>>s;
			String str(s);
			str.display();*/
			break;
		case 2:
			str1.lenght();
			break;
		case 3:
			int index;
			cout<<"\nEnter the Index:";
			cin>>index;
			str1.charAt(index);
			break;
		case 4:
			exit(1);
	}
	}
	getch();
}