#include<iostream>
using namespace std;

struct Time {
	int hrs;
	int min;
	int sec;
};
int main(){
	Time time2 ,time3;
	time2.hrs=11;
	time2.min=10;
	time2.sec=59;
	
	
	time3=time2;
	cout<<time3;
}
