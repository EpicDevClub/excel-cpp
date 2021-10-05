#include<iostream>
using namespace std;
class base{
	public:
		virtual void show()
		{ cout<<"Zohaib\n";
		}
};
class a: public base{
	public:
		void show()
		{ cout<<"Hassan\n";
		}
};
class b: public base{
	public:
		void show()
		{ cout<<"Here";
		}
};
int main()
{
	base *d;
	base v; a c; b f;
	d=&v;
	d->show();
	d=&c;
	d->show();
	d=&f;
	d->show();
	f.base::show();
	
	
	
}
