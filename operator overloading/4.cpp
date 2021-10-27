#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance(): feet(0),inches(0.0)
		{}
		Distance(int ft,float in): feet(ft),inches(in)
		{}
		void getdata()
		{
			cout<<"\nEnter Feet"; cin>>feet;
			cout<<"\nEnter inches"; cin>>inches;
		}
		void showdata()
		{
			cout<<feet<<"\'-"<<inches<<'\"';
	    }
	    Distance operator +(Distance);
};
Distance Distance::operator +(Distance d2)
{
	int f=feet+d2.feet;
	int i=inches+d2.inches;
       if(i>=12.0)
	    {
	       i-=12.0;
		   f++;  	
	    }
	    return Distance(f,i);
}
int main()
{
	Distance dis1,dis3,dis4;
	dis1.getdata();
	Distance dis2(11,12.7);
	
	dis3=dis1+dis2;
	
	dis4=dis1+dis2+dis3;
	
	cout<<"\ndis1= ";dis1.showdata();
	cout<<"\ndis2= ";dis2.showdata();
	cout<<"\ndis3= ";dis3.showdata();
	cout<<"\ndis4= ";dis4.showdata();
}
