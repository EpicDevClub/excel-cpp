// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string b;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,b) )
    {
      cout<<b<< '\n';
    }
    cout<<"File Read Successfuly";
    myfile.close();
  }

  else cout<<"Unable to open file"; 

  return 0;
}
