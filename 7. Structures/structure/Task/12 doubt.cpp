#include<iostream>
using namespace std;
struct firaction
{
	int a,b,c,d,e;
};

 firaction f1;
 char ch;
 
 cout<<"enter 1st firaction , operator & 2nd firaction "<<endl;
  cout<<endl;
  cout<<"\n1st firaction";
  cin>>f1.a; cout<<"/"; cin>>f1.b;
  
  cout<<endl;
  
  cout<<"operator"<<ch<<endl;
  cout<<endl;
  
  cout<<"\n2nd firaction";
  cin>>f1.c; cout<<"/"; cin>>f1.d;
  cout<<endl;
  
  if(ch=='+')
  {
  	f1.e=(f1.a*f1.d + f1.b*f1.c)/(f1.b*f1.d);
  	cout<<"First firaction + Second firaction = "<<f1.e;
  }
  
  if(ch=='-')
  {
  	f1.e=(f1.a*f1.d - f1.b*f1.c)/(f1.b*f1.d);
  	cout<<"First firaction - Second firaction = "<<f1.e;
  }
  
  if(ch=='*')
  {
  	f1.e=(f1.a*f1.c)/(f1.b*f1.d);
  	cout<<"First firaction * Second firaction = "<<f1.e;
  }
  
  if(ch=='/')
  {
  	f1.e=(f1.a*f1.d)/(f1.b*f1.c);
  	cout<<"First firaction / Second firaction = "<<f1.e;
  }
  
