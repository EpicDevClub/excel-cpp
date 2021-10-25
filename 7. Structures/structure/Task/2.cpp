#include<iostream>
using namespace std;
struct Point
{
	int x,y;
};
int main()
{
	Point p1,p2,p3;
	cout<<"Enter first coordinates ";
	cin>>p1.x>>p1.y;
	cout<<"Enter second coordinates ";
	cin>>p2.x>>p2.y;
	p3.x=p1.x+p2.x;
	p3.y=p3.y+p3.y;
	cout<<"p1+p2 = ("<<p3.x<<","<<p3.y<<")";
	
	
}
