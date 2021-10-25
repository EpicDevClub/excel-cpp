#include<iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct Date{ 
      int date;
      int month;
      int year;
};

struct Employee{
	int number;
	float salary;
	etype type;
	Date join;
};

int main()
{
	Employee e1,e2,e3;
	
	cout<<" Enter Employees number , compansation,type & employment date"<<endl;
	
	cout<<"Enter Employees numbers";
	cin>>e1.number>>e2.number>>e3.number;
	cout<<endl;
	
	cout<<"Enter employees compansetion";
	cin>>e1.salary>>e2.salary>>e3.salary;
	cout<<endl;
	
	cout<<"\nEnter employment type";
	
	cout<<" Enter employee type (first letter only): (laborer, secretary, manager, accountant, executive, researcher): ";
	    
	cout<<"\n For 1st employee";	
char ch;
cin>>ch;

	switch (ch)
{
  case 'l':  e1.type=laborer; break;
  case 's':  e1.type=secretary; break;
  case 'm': e1.type=manager;  break;
  case 'a':  e1.type=accountant; break;
  case 'e':  e1.type=executive; break;
  case 'r':  e1.type=researcher; break;  
}	
	
	cout<<"For 2nd employee"<<endl;
char chr;
cin>>chr;

	switch (chr)
{
  case 'l':  e2.type=laborer; break;
  case 's':  e2.type=secretary; break;
  case 'm': e2.type=manager;  break;
  case 'a':  e2.type=accountant; break;
  case 'e':  e2.type=executive; break;
  case 'r':  e2.type=researcher; break;  
}	

 cout<<"For 3rd employee";
char chre;
cin>>chre;

	switch (chre)
{
  case 'l':  e3.type=laborer; break;
  case 's':  e3.type=secretary; break;
  case 'm': e3.type=manager;  break;
  case 'a':  e3.type=accountant; break;
  case 'e':  e3.type=executive; break;
  case 'r':  e3.type=researcher; break;  
}	
	
cout<<"Enter employees joining date in formate (23/4/2020):"<<endl;

cout<<"For 1st employee";

cin>>e1.join.date>>e1.join.month>>e1.join.year;


cout<<"For 2nd employee";

cin>>e2.join.date>>e2.join.month>>e2.join.year;

cout<<"For 3rd employee";

cin>>e3.join.date>>e3.join.month>>e3.join.year;	
	
	cout<<endl<<endl<<endl;
cout<<"About 1st Employee"<<endl
    <<"Number is " <<e1.number<<endl
    <<"Compansation is "<<e1.salary<<endl
    <<"Type of employment is ";
    switch (e1.type)
{ 
  case  0: cout<<"Employee type is Labror"; break;
  case  1: cout<<"Employee type is Secretary"; break;
  case  2: cout<<"Employee type is Manager"; break;
  case  3: cout<<"Employee type is Accountant"; break;
  case  4: cout<<"Employee type is Executive"; break;
  case  5: cout<<"Employee type is Researcher"; break;
}
   cout<<endl;
   cout<<"Date of first employment "<<e1.join.date<<"/"<<e1.join.month<<"/"<<e1.join.year; 
    
    cout<<endl<<endl<<endl;
    

cout<<"About 2nd Employee"<<endl
    <<"Number is " <<e2.number<<endl
    <<"Compansation is "<<e2.salary<<endl
    <<"Type of employment is ";
    switch (e2.type)
{ 
  case  0: cout<<"Employee type is Labror"; break;
  case  1: cout<<"Employee type is Secretary"; break;
  case  2: cout<<"Employee type is Manager"; break;
  case  3: cout<<"Employee type is Accountant"; break;
  case  4: cout<<"Employee type is Executive"; break;
  case  5: cout<<"Employee type is Researcher"; break;
}
    cout<<endl;
     cout<<"Date of first employment "<<e2.join.date<<"/"<<e2.join.month<<"/"<<e2.join.year; 
     
     
     cout<<endl<<endl<<endl;
     cout<<"About 3nd Employee"<<endl
    <<"Number is " <<e3.number<<endl
    <<"Compansation is "<<e3.salary<<endl
    <<"Type of employment is ";
    switch (e3.type)
{ 
  case  0: cout<<"Employee type is Labror"; break;
  case  1: cout<<"Employee type is Secretary"; break;
  case  2: cout<<"Employee type is Manager"; break;
  case  3: cout<<"Employee type is Accountant"; break;
  case  4: cout<<"Employee type is Executive"; break;
  case  5: cout<<"Employee type is Researcher"; break;
}
    cout<<endl;
     cout<<"Date of first employment "<<e3.join.date<<"/"<<e3.join.month<<"/"<<e3.join.year;
        
	
	
	
	
	
	
	
	
}
