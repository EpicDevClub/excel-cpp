#include<iostream>
using namespace std;
int main(){
	int c=5;
	cout<<&c; // It will show the memory address of the variable
	int &t=c; // & pointer always works with memory addresses, so &t means memory address of c
	cout<<endl<<&t; // The memory address  of c will be shown
	int *p = &c; // The * pointer will be given the value of the c variable
	cout<<endl<<*p; // The original value of c variable will be shown on the screen
}
