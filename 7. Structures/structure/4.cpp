#include<iostream>
using namespace std;
 struct Distance
 {
 	int feet;
 	float inches;
 };
 
 struct Room
 {
 	Distance length;
 	Distance width;
 };
 
 int main()
 {
 	Room dinning;
    
    dinning.length.feet= 13;
    dinning.length.inches= 6.5;
	dinning.width.feet= 10;
	dinning.width.inches=0.0;
	
	float l=dinning.length.feet + dinning.length.inches/12;
	float w=dinning.width.feet + dinning.width.inches/12;
	
	cout<<"Dinning room area is "<<l*w<<" Square feet\n";
	return 0;	
 }
 
