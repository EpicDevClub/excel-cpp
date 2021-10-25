#include<iostream>
using namespace std;
 
struct Fraction
{
	int numerator;
	int denomerator;
	float ans;
};

int main()
{
	Fraction f1,f2,f3;
	char ch;
	
	cout<<"Enter first Firaction"<<endl;
	cin>>f1.numerator>>ch>>f1.denomerator;
	
	cout<<"Enter second Firaction"<<endl;
	cin>>f2.numerator>>ch>>f2.denomerator;
	
	f3.ans=(f1.numerator*f2.denomerator + f1.denomerator*f2.numerator)/(f1.denomerator*f2.denomerator);
	
	cout<<"a/b + c/d  = "<<f3.ans;
}
