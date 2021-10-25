#include<iostream>
using namespace std;

struct part
{
	int model;
	int number;
	float cost$;
}; 

int main()
{
	part p1={2019,5,5320};
	part p2;
	cout<<" Model = "<<p1.model;
	cout<<"\n Part =  "<<p1.number;
	cout<<"\n Cost$ = "<<p1.cost$;
	
	cout<<endl;
	
	p2=p1;
	
	
	cout<<"\n Model = "<<p2.model;
	cout<<"\n Part =  "<<p2.number;
	cout<<"\n Cost$ = "<<p2.cost$;
	
	
}
