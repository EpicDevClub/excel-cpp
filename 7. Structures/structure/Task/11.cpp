#include<iostream>
using namespace std;

struct time
{
	int hour,mins,sec;
};

int main()
{
	time t1,t2;
	cout<<"Enter time value (1st):"<<endl;

	cout<<"Enter hours:";      cin>>t1.hour;
	cout<<"Enter minutes:";    cin>>t1.mins;
	cout<<"Enter seconds:";      cin>>t1.sec;

	cout<<endl;

	cout<<"Enter time value (2nd):"<<endl;

	cout<<"Enter hours:";      cin>>t2.hour;
	cout<<"Enter minutes:";    cin>>t2.mins;
	cout<<"Enter seconds:";      cin>>t2.sec;

	cout<<endl;

	long sect1=t1.hour*3600+t1.mins*60+t1.sec;
	long sect2=t2.hour*3600+t2.mins*60+t2.sec;

	cout<<"Time you enter (1st) is equal in seconds = "<<sect1<<endl;
	cout<<endl;
	cout<<"Time you enter (2nd) is equal in seconds = "<<sect2<<endl;
	cout<<endl;

	long sum=sect1+sect2;

	cout<<"time (1st + 2nd) in seconds = "<<sum<<endl;

    int h,m,s,sum1,sum2;
    h=sum/3600;
    sum1=sum%3600;
    m=sum1/60;
    sum2=sum1%60;
    s=sum2;

    cout<<"Time is in (23/12/2012) foramt "<<h<<":"<<m<<":"<<s;


}
