#include<iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cout<<"Enter first number: ";cin>>a;
	cout<<"Enter second number: ";cin>>b;
	cout<<"Primes in between are: ";
	for(int d=2 ;d<b;d++){
		for(int e=2;e<=d;e++)
		if(d%e==0 && d>a && d<b){++c;}
		if(c==1){
			cout<<d<<" ";
		}
		c=0;
	}
	return 0;
}
	
				



