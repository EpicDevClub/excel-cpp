#include<iostream>
using namespace std;
class A{
	private:
		int a;
		public:
			A():a(0){}
			A(int g):a(g){
				cout<<"Enter any value: ";cin>>g;
				cout<<endl<<a;
			}
};
class B{
	private:
		int b;
		public:
			B():b(0){}
			B(int h):b(h){
				cout<<"Enter the value of class B: ";cin>>h;
				cout<<endl<<b;
			}
};
class C:public A,public B{
	private:
		int c;
		public:
			C():A(),B(),c(0){}
			C(int i):c(i){
				cout<<"Enter the value of C: ";cin>>i;
				cout<<endl<<c;
				}
				
				void showdata(int z){
					cout<<c;}
};
int main(){
	C c1;
	c1.showdata(0);
	cout<<"Hello";
}
