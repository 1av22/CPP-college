#include<iostream>
using namespace std;
//A simple program to print the sum of integers using funtion.

int sum(int a,int b)
{
    return (a+b);
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers :";
    cin>>a>>b;
    cout<<"Sum is : "<<sum(a,b);
    return 0;
}
//hello
