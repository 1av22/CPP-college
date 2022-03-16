/*
A generic function is a function that works the same for any data type value arguments. This can be achieved using TEMPLATES.
Here is a small example of templates and generic function :
*/

#include<iostream>
using namespace std;
template<typename T>   //***this datatype T that we used can be used as all datatypes***

void Swap(T& a,T& b)   //Creating a function to swap values.

{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    //swapping two integers.
    int a=1,b=2;
    cout<<a<<" - "<<b<<endl;
    Swap(a,b);
    cout<<a<<" - "<<b<<endl;
    //swapping two char.
    char c='c',d='d';
    cout<<c<<" - "<<d<<endl;
    Swap(c,d);
    cout<<c<<" - "<<d<<endl;
    //swapping two strings.
    string e="hey",f="hai";
    cout<<e<<" - "<<f<<endl;
    Swap(e,f);
    cout<<e<<" - "<<f<<endl;
    //swapping two booleans.
    bool g=true,h=false;
    cout<<g<<" - "<<h<<endl;
    Swap(g,h);
    cout<<g<<" - "<<h<<endl;
    return 0;
}