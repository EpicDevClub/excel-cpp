#include<iostream>
using namespace std;
class A{ // This is how you make a class
	private:
		int a; // Anything inside private can only be accessed in this class.
	public: // Public members can be accessed outside the class.
		A(){ // A constructor is a method(function) which has the same name as the class
			cout<<"Inside the constructor";
		}
};
int main(){
	A a1; // First you make an object of the class.
     // Even if we don't write "a1.A()", the constructor is automatically called when an object is made.
	// The output will be: "Inside the constructor".
}
