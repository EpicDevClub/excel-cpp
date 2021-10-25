#include<iostream>
using namespace std;
struct part{
	int model;
	int number;
	float cost;
}; 
int main(){
  part p1,p2;
  p1.model=2019;
  p1.number=5;
  p1.cost=5320;
  p2.model=2018;
  p2.number=5;
  p2.cost=4320;
  cout<<"model = "<<p1.model<<"  Part number = "<<p1.number<<"  cost = $"<<p1.cost<<endl;
  cout<<p2.model<<" "<<p2.number<<" "<<p2.cost<<endl ;	
	
	
}
