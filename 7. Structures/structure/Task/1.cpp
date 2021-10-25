#include<iostream>
using namespace std;
struct Phone
{
	int code;
	int exchange;
	int number;
};
int main()
{
   Phone num1,num2;
   num1={(+92),332,3145121};
   cout<<"Enter Your area code,exchange,& number "<<endl;
   cin>>num2.code>>num2.exchange>>num2.number;
   cout<<"My number is (+"<<num1.code<<")"<<" "<<num1.exchange<<"-"<<num1.number<<endl;
   cout<<"Your number is (+"<<num2.code<<")"<<" "<<num2.exchange<<"-"<<num2.number;
}
