#include<iostream>
using namespace std;

struct Time
{
	int hour;
	int minutes;
	int seconds;
};
 int main()
 {
 	Time time;
 	 cout<<"enter hours:";   cin>>time.hour; 
 	 cout<<"\n minutes:";    cin>>time.minutes;
 	 cout<<"\n seconds:";    cin>>time.seconds;
 	 
 	 long timesec;
       
       timesec=time.hour*3600 + time.minutes*60 + time.seconds;
       
       cout<<"Time in seconds = "<<timesec;
 	 
 }
