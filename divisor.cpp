#include <iostream>
using namespace std;
int GDC(int a, int b)
int main()
{
	int a,b;
	char c;
	do
	{
		cout<<"enter two integer values: ";
		cin>>a>>b;
		cout<<"gre"<<GCD(a,b)<<endl;
		cout<<"continue? (y/n)? ";
		cin>>c;
	}
	while (c!="n");
}
int GCD(int a,int b);
{
	int d=a%b;
	a=b;
	b=r;
}
}