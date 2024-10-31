#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define NEG_INF -32768
class String{
	char *str;
	int cap;
	int lenght(char *s1)
	{
		int len=0;
		while(s1[len]!='\0')
			len++;
		return len;
	}
	int strcmp(char *s1,char *s2)
	{
		for(int i=0;i<(lenght(s1)>=lenght(s2)?lenght(s1):lenght(s2));i++)
		{
			if(s1[i]-s2[i]!=0)
			{
				return s1[i]-s2[i];
			}
			return 0;
		}
	}
	public:
		String()
		{
			str=new char[16];
			cap=16;
		}
		String(char *s)
		{
			char *ptr;
			int len=0;
			ptr=s;
			while(*ptr!='\0')
			{
				len++;
				ptr++;
			}
			cap=16+len;
			str=new char[len+16];
			ptr=str;
			for(int i=0;i<=len;i++,ptr++,s++)
				*ptr=*s;
			cout<<str;
		}
		show()
		{
			cout<<str;
		}
		int lenght()
		{
			char *ptr;
			int len=0;
			ptr=str;
			while(*ptr!='\0')
			{
				len++;
				ptr++;
			}
			return len;
		}
		char charAt(int index)
		{
			return str[index];
		}
		void toLowerCase()
		{
			char *ptr=str;
			while(*ptr!='\0'){
				if(*ptr>='A'&&*ptr<='Z')
					*ptr+=32;
				ptr++;
			}
			cout<<"\n"<<str;
		}
		void toUpperCase()
		{
			char *ptr=str;
			while(*ptr!='\0'){
			    if(*ptr>='a'&&*ptr<='z')
				 *ptr-=32;
			    ptr++;
			}
			cout<<"\n"<<str;
		}
		int capacity()
		{
			return cap;
		}
		int indexAt(char ch)
		{
			char *ptr=str;
			int i=0;
			while(ptr[i]!='\0')
			{
				if(ptr[i]==ch)
					return i;
				i++;
			}
			if(ptr[i]=='\0')
				return NEG_INF;
		}
		int indexAt(char ch,int index)
		{
			char *ptr=str;
			int i=0;
			for(i=index;i<lenght();i++)
				if(ptr[i]==ch)
					return i;
			for(i=0;i<index;i++)
				if(ptr[i]==ch)
					return i;
			return NEG_INF;
		}
		int indexAt(char *sub,int *idx)
		{
			char sup[100];
			int i,j;
			for(i=0;i<lenght();i++)
			{
				j=0;
				while(1)
				{
					if(str[i]==' '||str[i]=='\0')
						break;
					idx[j]=i;
					sup[j++]=str[i++];
				}
				sup[j]='\0';
				if(strcmp(sup,sub)==0)
					return j;
			}
			return 0;
		}
		int indexAt(char *sub,int *idx,int index)
		{
			char sup[100];
			int i,j;
			for(i=index;i<lenght();i++)
			{
				j=0;
				while(1)
				{
					if(str[i]==' '||str[i]=='\0')
						break;
					idx[j]=i;
					sup[j++]=str[i++];
				}
				sup[j]='\0';
				if(strcmp(sup,sub)==0)
					return j;
			}
			for(i=0;i<index;i++)
			{
				j=0;
				while(1)
				{
					if(str[i]==' '||str[i]=='\0')
						break;
					idx[j]=i;
					sup[j++]=str[i++];
				}
				sup[j]='\0';
				if(strcmp(sup,sub)==0)
					return j;
			}
			return 0;
		}
		String *substring(int start)
		{
			char *ptr=str;
			cout<<"\nSubstring:";
			for(int i=start;ptr[i]!='\0';i++)
				cout<<ptr[i];
			return this;
		}
		String* append(char *sub)
		{
			int len=lenght(sub);
			if(len<cap)
			{
				char *s=str;
				while(*s!='\0')
					s++;
				while(*sub!='\0')
				{
					*s=*sub;
					s++;
					sub++;
				}
				*s='\0';
			}
			else
			{
				char *temp=new char[cap];
				char *s=str,*tempp=temp;
				while(*s!='\0')
				{
					*tempp=*s;
					tempp++;
					s++;
				}
				delete str;
				str=new char[cap+len];
				s=str;
				tempp=temp;
				//Copying the og String
				while(*tempp!='\0')
				{
					*s=*tempp;
					s++;
					tempp++;
				}
				//copying the new String
				while(*sub!='\0')
				{
					*s=*sub;
					s++;
					sub++;
				}
				*s='\0';
			}
			cap=cap+len;
			//cout<<str;
			return this;
		}
		~String()
		{
			delete str;
		}
};
void main()
{
	clrscr();
	int index;
	char str[100],ch,sub[100];
	int idx[100],check,temp;
	cout<<"Enter a String:";
	cin.getline(str,100);
	String s(str);
	while(1)
	{
		int choice;
		cout<<"\n\n--------------MENU-------------";
		cout<<"\n1.Lenght\n2.CharAt\n3.To Lower Case\n4.To Upper Case\n5.Capacity\n6.IndexOf\n7.IndexOf After An Index\n8.IndexOf for a string\n9.IndexOf for a string after an Index\n10.Append\n11.Substring with Start Index";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nLenght="<<s.lenght();
				break;
			case 2:
				cout<<"\nEnter the Index:";
				cin>>index;
				cout<<"Character At "<<index<<" is: "<<s.charAt(index);
				break;
			case 3:
				s.toLowerCase();
				break;
			case 4:
				s.toUpperCase();
				break;
			case 5:
				cout<<"Capacity:"<<s.capacity();
				break;
			case 6:
				cout<<"\nEnter a Character:";
				cin>>ch;
				index=s.indexAt(ch);
				if(index!=NEG_INF)
					cout<<ch<<" found at index:"<<index;
				else
					cout<<ch<<" not found!";
				break;
			case 7:
				int index;
				cout<<"\nEnter a Character and Index:";
				cin>>ch>>index;
				index=s.indexAt(ch,index);
				if(index!=NEG_INF)
					cout<<ch<<" found at index:"<<index;
				else
					cout<<ch<<" not found!";
				break;
			case 8:
				cout<<"\nEnter the String to be compared:";
				cin>>sub;
				check=s.indexAt(&sub[0],&idx[0]);
				if(check!=0)
				{
					cout<<"\n"<<sub<<" found at indexes:";
					for(int i=0;i<check;i++)
						cout<<idx[i]<<" ";
				}
				else
					cout<<"\nString not found!!";
				break;
			case 9:
				cout<<"\nEnter the String to be compared and index:";
				cin>>sub>>index;
				check=s.indexAt(sub,idx,index);
				if(check!=0)
				{
					cout<<"\n"<<sub<<" found at indexes:";
					for(int i=0;i<check;i++)
						cout<<idx[i]<<" ";
				}
				else
					cout<<"\nString not found!!";
				break;
			case 10:
				cout<<"\nEnter the string to append:";
				cin>>sub;
				s.append(sub);
				s.show();
				break;
			case 11:
				cout<<"\nEnter Index to start:";
				cin>>temp;
				s.substring(temp);
				break;
			default:
				exit(1);
		}
	}
}
