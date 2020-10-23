//This is a basic demonstrative program to add two numbers using function
#include<iostream>
#include<conio.h>

//declare a function add()
//its return type is int as it given integer value as result
//add() takes two integer parameters
int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

//declare function subtract() that subtracts two numbers
int subtract(int a,int b)
{
    int result;
    result = a - b;
    return result;
}

//declare function to multiply two numbers
int multiply(int a, int b)
{
    int result;
    result = a*b;
    return result;
}

//declare function to divide two numbers
float divide(int a, int b)
{
    float result;
    result = a/(float)b;
    return result;
}

//main function
int main()
{
    int x,y,sum,diff,mul;
    float div;
    std::cout<<"Enter two numbers"<<std::endl;
    std::cin>>x>>y;
    //function call
    sum = add(x,y);
    diff = subtract(x,y);
    mul = multiply(x,y);
    div = divide(x,y);
    std::cout<<"Sum = "<<sum<<std::endl;
    std::cout<<"Difference = "<<diff<<std::endl;
    std::cout<<"Product = "<<mul<<std::endl;
    std::cout<<"Division = "<<div<<std::endl;
}
