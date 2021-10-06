#include <iostream>
#include <conio.h>
using namespace std;

int main(){
   int n, largest;
   int num[50];
   cout<<"Enter number of elements you want to enter: ";
   cin>>n;
   
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
   }

   largest = num[0];
   for(int i = 1;i < n; i++) {
      
      if(largest < num[i])
         largest = num[i];
   } 
   cout<<"Largest element in array is: "<<largest;
    return 0;
}