#include <iostream>
#include <math.h>
using namespace std;
double babylonianRoot(double a);
int main()
{
	int a;
	char b;
	char c='n';
	do
	{
		cout<<"Enter a value"<<endl;
		cin>>a;
		cout<<"Square root of "<<a<<" is "<<babylonianRoot(a)<<endl;
		cout<<"continue? (y/n): ";
		cin>>b;
	}
	while (b!=c);
	return 0;
}
double babylonianRoot(double n)
{
	return sqrt(n);
}