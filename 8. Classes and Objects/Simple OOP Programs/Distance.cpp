#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
		public:
			Distance():feet(0),inches(0){}
			Distance(int x,float y):feet(x),inches(y){}
			void getdata(){
				cout<<"Enter Feet: ";cin>>feet;
				cout<<"Enter Inches: ";cin>>inches;
			}
			Distance ope(Distance d2);
			void showdata(){
				cout<<feet<<"'"<<inches;
			}
}; 
Distance Distance::ope(Distance d2){
	Distance temp;
	temp.inches=inches+d2.inches;
	temp.feet=feet+d2.feet;
	return temp;
}
int main(){
	Distance d1(10,12.1),d2,d3;
	d2.getdata();
		d3=d1.ope(d2); 
		cout<<"\nd1: "; d1.showdata();
		cout<<"\nd2: "; d2.showdata();
		cout<<"\nd3: "; d3.showdata();
	
}
