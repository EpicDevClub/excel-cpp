#include<iostream>																													 					 		
using namespace std;

struct Distance{

	int feet;
	float inches;
};

int main()
{
	Distance d1,d3;
	Distance d2={11,6.25};
	
	cout<<"\n Enter feet ";  cin>>d1.feet;
	cout<<" enter inches ";  cin>>d1.inches;
	
	d3.inches= d1.inches + d2.inches;
	d3.feet=0;
	
	if (d3.inches>=12.0)
	{
		d3.inches-=12.0;
		d3.feet++;
	}
	d3.feet+= d1.feet + d2.feet;
	
	cout<<d1.feet<<"\'_"<<d1.inches<<"\"+";
	cout<<d2.feet<<"\'_"<<d2.inches<<"\"=";
	cout<<d3.feet<<"\'_"<<d3.inches<<"\"\n";
}
