#include<iostream>
using namespace std;
 struct Date
 {
 	int day;
 	int  month;
 	int year;
 };
 
 int main()
 {
 	Date date;
 	 
 	cout<<"Enter date (In formate 23/02/202): "<<endl;
	 cin>>date.day>>date.month>>date.year;
	 
	 cout<<"Date is "<<date.day<<"/"<<date.month<<"/"<<date.year;
	  
 }
