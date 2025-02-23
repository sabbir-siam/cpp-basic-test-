#include<iostream>
using namespace std;

double power(double x, double n)
{
	double result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}


int main()
{
  double x,n;
  cout<<"Enter the value of x: ";
  cin>>x;
  cout<<"Enter the value of n: ";
  cin>>n;
  cout << x << "^" << n << " = " << power(x, n) << endl;	
}
