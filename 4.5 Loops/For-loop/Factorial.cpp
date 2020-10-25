#include<iostream>
using namespace std;
int main(){
	int x,y=1;
	bool z;
	do {
	cout<<"Enter any value: ";cin>>x;
	cout<<"Factorial of "<<x<<" will be: ";
	for(x;x>0;x--){
		 y=y*x;
	      
	}
	cout<<y<<endl;
	cout<<"Do you want to make another Fact?\n Press 0 for No. \n Press 1 for YES.";cin>>z;
	if(z==1){
		y=1;
		}
	}
	while(z==1);
	if(z==0){
		return 0;
	}
	
return 0; 
}
