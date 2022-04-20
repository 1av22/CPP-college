#include<iostream>
class FriendA
{
private:
    int a=10;
public:
    friend class FriendB;
    friend void show(FriendA& x);
};
class FriendB
{
public:
    void showA(FriendA& x)
    {
        std::cout<<"Friend Class!\nA : "<<x.a<<std::endl;
    }
};
void show(FriendA& x)
{
    std::cout<<"Friend Function!\nA : "<<x.a<<std::endl;
}
int main()
{
    FriendA ob;
    FriendB b;
    b.showA(ob);
    show(ob);
}