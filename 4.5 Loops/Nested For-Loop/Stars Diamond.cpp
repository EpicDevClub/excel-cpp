#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	for(x=1;x<5;x++){
		for(y=5;y>=x;y--)
		cout<<" ";
		for(z=1;z<=2*x-1;z++){
			cout<<"X";	
		}
		cout<<endl;	
	}
	for(x=5;x>=1;x--){
		for(y=5;y>=x;y--)
		cout<<" ";
		for(z=0;z<2*x-1;z++)
		cout<<"X";
		cout<<endl;
	}
}
