#include <iostream>
using namespace std;
bool isLeapYear(int year);
int last_day(int month, int year);
int main()
{
	int month, year;
	char ch;
	do
	{
		cout<<"enter month and year: ";
		cin>>month>>year;
		cout<<"days in month"<<last_day(month,year)<<endl;
		cout<<"continue? (y/n): ";
		cin>>ch;
	}
	while (ch!='n');
}
bool isLeapYear(int year)
{
	return ((year%4==0 && year%100!=0) || year%400==0);
}
int last_day(int month, int year)
{
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
		case 4: case 6: case 9: case 11:
		return 30;
		case 2:
		return (isLeapYear(year))?29:28;
		default:
		return -1;
	}
}