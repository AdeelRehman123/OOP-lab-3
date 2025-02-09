#include<iostream>
#include<string>
using namespace std;
class Date
{
	private:
	int day;
	int month;
	int year;
	
	public:
	
	Date(int m,int d,int y)
	{
		setday(d);
		setmonth(m);
		setyear(y);
	}
	void setday(int d)
	{
		if(d>0 && d<32)
		{
			day=d;
		}
		else
		{
			day=1;
			cout<<"Invalid day! Setting to default (1)."<<endl;
		}
	}
	void setmonth(int m)
	{
		if(m>0 && m<13)
		{
			month=m;
		}
		else
		{
			month = 1;
			cout<<"invalid Month! Setting to default(1)."<<endl;
		}
	}
	void setyear(int y)
	{
		year=y;
	}
	int getMonth(){ return month; }
	int getDay(){ return day; }
	int getYear(){ return year; }
	void display()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
};
int main()
{
	Date date1(4,27,2022);
	cout<<"Date: ";
	date1.display();
	date1.setday(23);
	date1.setyear(2023);
	cout<<"updated Date: ";
	date1.display();
	return 0; 
}
