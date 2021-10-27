#include<iostream>
using namespace std;

class Distance 
{
	private:
		int feet;
		float inches;
	public:
		Distance(): feet(0),inches(0)
		 { }
	    Distance(int ft,float in): feet(ft),inches(in)
	     { }
	     void getdata()
	     {
	     	cout<<"\nEnter feet"; cin>>feet;
	     	cout<<"\nEnter inches"; cin>>inches;
		 }
		 void showdata()
	       {
	       	cout<<feet<<"\'"<<inches<<'\"';
		   }
	     bool operator < (Distance );
};
      bool Distance::operator <(Distance d2)
      {
      	float f1=feet+inches/12;
      	float f2=d2.feet+d2.inches/12;
      	return (f1<f2) ? true :false;
	  }
	int main()
	{
		Distance dis1;
		dis1.getdata();
		
		Distance dis2(23,43.3);
		
		if (dis1<dis2)
		{
			cout<<"\ndis1 is less than dis2";
		}
		else 
		    cout<<"\ndis2 is less than dis1";
		    cout<<endl;
	}
