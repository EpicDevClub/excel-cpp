#include<iostream>
using namespace std;
class test{
	private:
	static	int serial;
	public:
		test()
		{
		serial++;
		}
		int get(){
			return serial--;
}
};
int test::serial=0;
int main(){
	test obj,obj1,obj2;
	cout<<obj.get()<<obj1.get()<<obj2.get();
}
