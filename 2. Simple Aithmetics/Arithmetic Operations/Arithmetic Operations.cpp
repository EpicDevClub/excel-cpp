//This is a program to demonstrate simple arithmetic operations
#include<iostream>
#include<conio.h>
int main()
{
    //declare variables
    int a,b;
    //ask user to enter two numbers
    std::cout << "Enter two numbers" <<std::endl; //endl is used to go to new line
    std::cin>>a>>b;
    //add two numbers
    int sum;
    sum = a+b;
    //subtract two numbers
    int diff;
    diff = a-b;
    //multiply two numbers
    int mul;
    mul = a*b;
    //divide two numbers
    float div;
    div = a/b;
    std::cout<<"Sum = "<<sum<<std::endl;
    std::cout<<"Difference = "<<diff<<std::endl;
    std::cout<<"Product = "<<mul<<std::endl;
    std::cout<<"Quotient = "<<div<<std::endl;
    return 0;
}
