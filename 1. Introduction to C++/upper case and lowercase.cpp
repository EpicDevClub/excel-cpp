#include<iostream>
#include<conio.h>     //upper case and lowercase
#include<iomanip>
using namespace std;
int main()
{ char a;
 
cout<<"Upper case character=  ";
cin>>a;
if(a<=90 && a>=65){ a=a+32; cout<<"Lower case character= "<<"'"<<(char)a<<"'"<<endl<<endl;
}
else { cout<<" invalid input"<<endl<<endl;
}
main();
getch();
}
