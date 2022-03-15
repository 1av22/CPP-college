#include<iostream>
#include<string>
using namespace std;

class ATM
{
public:
    int card_no,pin,amt,pin2;
    ATM(int cb,int p,int a,int p2)
    {
        cb=card_no;
        p=pin;
        a=amt;
        p2=pin2;
    }
    void getData()
    {
        cout<<"Enter your card number : ";
        cin>>card_no;
        cout<<"Enter the pin : ";
        cin>>pin;
    }
    void money()
    {
        cout<<"Enter the amout : ";
        cin>>amt;
        cout<<"Enter the pin again : ";
        cin>>pin2;
    }
    void showMoney()
    {
        if(pin==pin2)
        {
            int ct=0;
            ct=amt/2000;
            cout<<"2000 rupee notes : "<<ct<<endl<<endl;
            amt=amt-(ct*2000);
            ct=amt/500;
            cout<<"500 rupee notes  : "<<ct<<endl<<endl;
            amt=amt-(ct*500);
            ct=amt/100;
            cout<<"100 rupee notes  : "<<ct<<endl<<endl;
            amt=amt-(ct*100);
            ct=amt/50;
            cout<<"50 rupee notes   : "<<ct<<endl<<endl;
            amt=amt-(ct*50);
            ct=amt/20;
            cout<<"20 rupee notes   : "<<ct<<endl<<endl;
            amt=amt-(ct*20);
            ct=amt/10;
            cout<<"10 rupee notes   : "<<ct<<endl<<endl;
            amt=amt-(ct*10);
            ct=amt/5;
            cout<<"5 rupee coins    : "<<ct<<endl<<endl;
            amt=amt-(ct*5);
            ct=amt/2;
            cout<<"2 rupee coins    : "<<ct<<endl<<endl;
            amt=amt-(ct*2);
            cout<<"1 rupee coins    : "<<amt<<endl<<endl;
        }
        else
        {
            cout<<"WRONG PIN!!"<<endl;
        }
    }
};
class bank
int main()
{
    ATM obj1(0,0,0,0);
    obj1.getData();
    obj1.money();
    obj1.showMoney();
    return 0;
}