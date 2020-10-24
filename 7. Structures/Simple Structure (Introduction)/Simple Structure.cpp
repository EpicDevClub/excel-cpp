#include<iostream>
using namespace std;
struct box{
	int length;
	float height;
	float breadth;
	float volume;
};
int main(){
	box b1;
	cout<<"Enter length of the box: ";
	cin>>b1.length;
	cout<<"Enter breadth of box: ";
	cin>>b1.breadth;
	cout<<"Enter height of box: ";
	cin>>b1.height;
	b1.volume=b1.length*b1.breadth*b1.height;
	cout<<"Volume of the box is: "<<b1.volume;
	return 0;
}
