#include<iostream>
namespace ns1
{
    int a=20;
}
namespace ns2
{
    int a=60;    
}

int main()
{
    std::cout<<ns2::a<<std::endl;
    std::cout<<ns1::a<<std::endl;
}
