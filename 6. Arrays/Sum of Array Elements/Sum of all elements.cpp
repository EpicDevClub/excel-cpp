//Program to add elements of array
#include<iostream>

int main()
{
    int n,i,sum=0;
    std::cout<<"Enter size of array : ";
    std::cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        std::cout<<"\nEnter element : ";
        std::cin>>arr[i];
        sum = sum + arr[i];
    }
    std::cout<<"Sum of all elements of array : "<<sum;
}
