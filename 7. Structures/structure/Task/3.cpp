#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
struct Volume
{
	Distance height;
	Distance length;
	Distance width;
	
};
int main()
{
	Volume cube;
	
	cube.height.feet=7;
	cube.height.inches=6.2;  //7.52
	
	cube.length.feet=6;
	cube.length.inches=5.2; //6.43
	
	cube.width.feet=5;
	cube.width.inches=4.2; //5.35
	
	float h=cube.height.feet + cube.height.inches/12;
	float l=cube.length.feet + cube.length.inches/12;
	float w=cube.width.feet + cube.width.inches/12;
	 
	cout<<"Volume in cube feet = "<<h*l*w; 
	
	
}
