#include<iostream>
using namespace std;
int main()
{
	float x,y,z;
	cout<<"Entry any two number"<<endl;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	cout<<"\nBefore swapping"<<endl;
	cout<<"First number entered: "<<x<<endl;
	cout<<"Second number entered: "<<y <<endl;
	z=x,
	x=y;
	y=z;
	cout<<"\nAfter swapping"<<endl;
	cout<<"First number: "<<x<<endl;
	cout<<"Second number: "<<y <<endl;
	
}
