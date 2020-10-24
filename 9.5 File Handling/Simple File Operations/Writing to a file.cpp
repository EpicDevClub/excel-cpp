// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
	string a;
	cout<<"Enter the message which will be recorded in the file: ";
	getline(cin,a);
    ofstream myfile;
    myfile.open ("Example.txt");
    if(myfile.is_open()){
    myfile <<a;
    cout<<"File written successfuly";
    myfile.close();
    return 0;
}
}
