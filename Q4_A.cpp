/*Write a program to implement multiple inheritance as shown
in following Figure No. 1:
Class : Result
data mem : Total
Class : Subject 1
data mem : m1
Class : Subject 2
data mem : m2*/
class Subject1{
	public:
		double m1=100;
};
class Subject2{
	public:
		double m2=99;
};
class Result:public Subject1,public Subject2{
	public:
		total=m1+m2;
		void display()
		{
			cout<<"Total:"<<total;
		}
};
int main()
{
	Result r;
	r.display();
	return 0;
}

