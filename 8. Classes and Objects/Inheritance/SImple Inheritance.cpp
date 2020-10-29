#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"This is the constructor of parent class";
		}
};
class B: public A{
	
};
int main(){
	B b1;
}
