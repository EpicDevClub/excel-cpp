//This is a Basic OOP programme Made to illustrate how OOP works
//Classes are just a way to organize your code better by collecting set of custom Functions known as members of the Class

#include<iostream>
#include<istream>
#include<string>
using namespace std;

class Outlets{                      // This is going to make a Outlets class
	private:
		string outlet;              // This will initialize our variables
		string address;
	public:
		setoutlet(string y)         // This will help us set a value to our variables
		{
			outlet=y;
		}
	
	    string getoutlet()         // This will help us get our variable values back
	    {
	    	return outlet;
		}
		
		setaddress(string a)         // This will help us set a value to our variables
		{
			address=a;
		}
	
	    string getaddress()         // This will help us get our variable values back
	    {
	    	return address;
		}
};
class Dresses{
	
	private:
		string dress;        // This will set our Dress variables
		string color;
    
    public:
    	setdress(string x)    // This will help us set values to those variables
    	{ 
    		dress=x;
		}
		
		string getdress()       // This will help us get the values back 
		{
			return dress;
		}
		
			setcolor(string b)   //This will set color values
    	{ 
    		color=b;
		}
		
		string getcolor()       // This will help us to get the values back
		{
			return color;
		}
};


int main()
{
	Outlets O1,O2;   // This is our first Object of Outlet class
	     O1.setoutlet("Outlet= Khadi");  // This will Set Our Values by refering back to the SetOutlet Function
	     O1.setaddress("Address= Auto-Bhan Road");
	     
	     
	     O2.setoutlet("Outlet= Ethnic");
	     O2.setaddress("Address= Boulavard Mall");
	    
	     
	
	Dresses D1, D2;  // This is our first Object of Dresses class 	
		 D1.setdress("-This is the first khadi Dress"); // This will Set Our Values by refering back to the Setdress Function
		 D1.setcolor("-Color= Pink");
        
	
		D2.setdress("-This is the first Ethnic Dress");
		D2.setcolor("-Color= Orange");
	
		
	int player; // This will be our Main User
	
	cout<<"Enter 1 for Khadi Outlet or Enter 2 for Ethnic Outlet= "<<endl;
	cin>>player;
	
	if(player==1)
	{
		cout<<O1.getoutlet()<<endl;    // This will display Khadi Outlet and its address
	     cout<<O1.getaddress()<<endl;
	     
	     cout<<"Do you want to see the Dress Selectons? press 1 to see or 2 to exit."<<endl;
	     cin>>player;
	     
	    if(player==1)
    	{
		cout<<D1.getdress()<<endl;    // This will display Khadi Dresses and its colors
	    cout<<D1.getcolor()<<endl;
	    }
	    else
	    cout<<"This is the end of the programme"<<endl;
	}
	else if(player==2)
	{
		 cout<<O2.getoutlet()<<endl; // This will give us Ethnic Outlet and its address
	     cout<<O2.getaddress()<<endl;
	     
	     cout<<"Do you want to see the Dress Selectons? press 1 to see or 2 to exit."<<endl;
	     cin>>player;
	     
	     if(player==2)
    	{
		cout<<D2.getdress()<<endl;    // This will give us Ethnic Dresses and its colors
		cout<<D2.getcolor()<<endl;
     	}
     	else
     	cout<<"This is the End of the Programme"<<endl;
	}

}
