#include<iostream>
using namespace std;
int main() {
	int x, y;
	cout<"Enter the number: ";
	cin>>x;
	for(y=2;y<x;y++){
		if(x%y==0){
		cout<<"Not a prime number.";
		break;
	} }
	if(x==y){
	cout<<"Prime number";
} return 1;
}
