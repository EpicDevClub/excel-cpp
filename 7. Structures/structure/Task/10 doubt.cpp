#include<iostream>
using namespace std;
 struct sterling
 {
 	int pound,shilling,pence;
 };
 
 int main()
 {
 	sterling ampt;
 	
 	float dpound;
 	cout<<"Enter Decimal pound";
 	cin>>dpound;
 	
 	ampt.pound=static_cast<int>(dpound);
 	float fracpound=dpound-ampt.pound;
 	
 	float dshilling=dpound*20;
 	ampt.shilling=static_cast<int>(dshilling);
 	float fracshilling=dshilling-ampt.shilling;
 	
   ampt.pence=static_cast<int>(fracshilling*12);

   cout<<"Equivalent in old notation "<<ampt.pound<<"."<<ampt.shilling<<"."<<ampt.pence;
 }
