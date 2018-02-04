#include <iostream>
#include <math.h>
using namespace std;
bool isLeapYear(int year);
int main()
{
	int year;
	char a;
	do{
		cout<<"enter a year value"<<endl;
		cin>>year;
		if (isLeapYear(year) == true)
			{
				cout<<year<<" is a leap year"<<endl;
			}
		else cout<<year<<" is not a leap year"<<endl;
		cout<<"continue? (y/n): ";
		cin>>a;
	}
	while (a!='n');
	return 0;	
}
bool isLeapYear(int year)
{
	return ((year%4==0 && year%100!=0) || year%400==0);
}