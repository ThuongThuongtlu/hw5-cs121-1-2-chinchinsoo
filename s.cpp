#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
	int no1,no2;
	cout<<"enter 2 number (a,b):";
	cin>>no1>>no2;
	swap(no1,no2);
	cout<<"Swap(a,b) is "<<no1<<" "<<no2<<endl;
	return 0;
}
void swap(int &a, int &b)
{
	 a-=b;
	 b+=a;
	 a=b-a;
}