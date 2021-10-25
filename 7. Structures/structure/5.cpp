#include<iostream>
using namespace std;
 
enum days_of_week {mon,tue,mon,thur,fri,sat,sun};

int main()
{
	days_of_week day1,day2;
	
	day1=mon;
	day2=sat;
	int diff=day2-day1;
	 
	cout<<"Days between ="<<diff<<endl;
	 
	if (day1<day2) 
	{
		cout<<"Day1 comes before day2"<<endl;
	}
}
