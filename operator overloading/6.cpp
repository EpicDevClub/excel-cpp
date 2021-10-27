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
	  void operator += (Distance); 
	  
};
    void Distance::operator += (Distance d2)
    {
    	feet+=d2.feet;
    	inches+=d2.inches;
    	if (inches>=12.0)
    	  {
		   inches -= 12.0;
    	   feet++;
          }
	}
  int main()
  {
  	Distance dis1;
  	dis1.getdata();
  	
  	Distance dis2(23,65.7);
  	
  	cout<<"\nDis1 = "; dis1.showdata();
  	cout<<"\nDis2 = "; dis2.showdata();
  	
  	dis1+=dis2;
  	cout<<"\nAfter additoin";
  	cout<<"\nDis1 = "; dis1.showdata();
  	cout<<endl;
	  }	
