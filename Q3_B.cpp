/*Write a C++
program to displya sum of array elements of array size n*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number of elements in the Array:";
	cin>>n;
	int arr[n],sum=0;
	cout<<"Enter "<<n<<" elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}		
	cout<<"Sum :"<<sum;
}
