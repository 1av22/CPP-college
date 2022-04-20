#include<iostream>
class A
{
public:
    virtual double mul(int x,int y)=0;
    virtual std::string className()=0;
};
class B:public A
{
public:
    std::string name;
    B(std::string n)
    {
        name=n;
    }
    std::string className()override
    {
        return name;
    }
    double mul (int x,int y)override
    {
        return x*y;
    }
};
class C:public A
{
public:
    std::string name;
    C(std::string n)
    {
        name=n;
    }
    std::string className()override
    {
        return name;
    }
    double mul(int x,int y)override
    {
        return x*y;
    }
};
void print(A* obj)
{
    std::cout<<obj->className()<<std::endl;
    std::cout<<obj->mul(1,2)<<std::endl;
}
int  main()
{
    B* ob=new B("Adu");
    C* oc=new C("Anu");
    print(ob);
    print(oc);
}