#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	for(int x=1;x<=5;x++){
		for(y=1;y<=5;y++){
			if(y>x){
				cout<<"*"<<" ";
			}
			else{
			cout<<y<<" ";}
		}
		cout<<endl;
	}
}
	
