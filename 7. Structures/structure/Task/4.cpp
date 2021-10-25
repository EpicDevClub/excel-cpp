#include<iostream>
using namespace std;
 
struct employee
{
	int number;
	float salary;
}; 
int main()
{
	employee emp1,emp2,emp3;
	
	cout<<" fill data of employees "<<endl;
	
	cout<<"employee 1 "<<endl;
	
	cout<<"Number"; 
	cin>>emp1.number;       cout<<endl;
	cout<<"Compensation";
	cin>>emp1.salary;      cout<<endl;
	
	cout<<"employee 2 "<<endl;
	
	cout<<"Number"; 
	cin>>emp2.number;       cout<<endl;
	cout<<"Compensation";
	cin>>emp2.salary;       cout<<endl;cout<<endl;
	
	
	cout<<"employee 3 "<<endl;
	
	cout<<"Number"; 
	cin>>emp3.number;        cout<<endl;
	cout<<"Compensation";
	cin>>emp3.salary;        cout<<endl;
	
	
	
}
