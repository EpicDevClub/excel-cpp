#include<iostream>
#include<conio.h>
using namespace std;

int sqr(int x){ return x*x;};
int main()
{
int no,ans;
 cout<<"Enter a number= ";
 cin>>no;
 ans=sqr(no);
 cout<<"Square is= "<<ans;
}
