#include<iostream>
using namespace std;
int main()
{
enum employee {laborer, secretary, manager, accountant, executive, researcher};
	
employee etype;
	
char ch;
cout<<" Enter employee type (first letter only): (laborer, secretary, manager, accountant, executive, researcher): ";

cin>>ch;	
switch (ch)
{
  case 'l':  etype=laborer; break;
  case 's':  etype=secretary; break;
  case 'm': etype=manager;  break;
  case 'a':  etype=accountant; break;
  case 'e':  etype=executive; break;
  case 'r':  etype=researcher; break;  
}	
switch (etype)
{ 
  case  0: cout<<"Employee type is Labror"; break;
  case  1: cout<<"Employee type is Secretary"; break;
  case  2: cout<<"Employee type is Manager"; break;
  case  3: cout<<"Employee type is Accountant"; break;
  case  4: cout<<"Employee type is Executive"; break;
  case  5: cout<<"Employee type is Researcher"; break;
}
	
}
