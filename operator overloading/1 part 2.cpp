#include<iostream>
using namespace std;

class count
{
	private:
		int x;
	public:
		count() : x(1)
	        {    }
		int getdata()
		{
			return x;
		}
        count operator ++()
		{
			++x;
		}
};
int main()
{
	count c1,c2;
	cout<<"c1= "<<c1.getdata();
	++c1;
	cout<<"c1= "<<c1.getdata();
	
}