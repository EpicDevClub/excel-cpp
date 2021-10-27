#include<iostream>
using namespace std;

class count
{
	private:
		int x;
	public:
		count() : x(1)
	      {}
		int getdata()
		{
			return x;
		}
		count operator ++()
		{
			count temp;
			temp.x=++x;
			return temp;
		}
		count operator ++(int)
		{
			count temp;
			temp.x=x++;
			return temp;
		}
};

int main()
{
	count c1,c2;
	cout<<"c1= "<<c1.getdata();
	++c1;
	cout<<"\nc1= "<<c1.getdata();
	c2=c1++;
	cout<<"\nc2= "<<c2.getdata();
	c2=c1;
	cout<<"\nc2= "<<c2.getdata();
}
