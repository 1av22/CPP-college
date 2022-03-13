//Program to check prime numbers within a range.
#include<iostream>
using namespace std;

void isPrime(int x)
{
    bool flg=true;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flg=false;
            break;
        }
    }
    if (flg==true)
        cout<<x<<endl;   
}
int main()
{
    int a,b;
    cout<<"Enter lower range : ";
    cin>>a;
    cout<<"Enter upper range : ";
    cin>>b;
    for(int x=a;x<=b;x++)
    {
        isPrime(x);
    }
    return 0;
}