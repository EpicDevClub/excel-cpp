#include<iostream>
using namespace std;
class marker{ 
private:
	int price,weight;
public:
	marker(): price(0),weight(0)
	{	}
	void setprice(int a) const
{ cout<<"I m const 1st method!!!\n" ;}	 
  void setweight( int b) const;
 //{ price=b; or price++;}  
 //generates error bcoz const methods r used only for reporting or checking purpose
 
};
void marker::setweight(int b) const{ cout<<"i m a const type function";}
int main(){
	marker blue;
	blue.setprice(50);
	blue.setweight(40);
	
}
