/*

:- They are attribute of Classes or class member.
:- Only one copy of that member is created for the entire class and shared by all the object.
:- It is Initialized before any Object.
:- It is Declared using Static Keyword.

Real-Life Example: Tracking the Number of Instances of a Class

Imagine you are creating a class to represent a bank account. You might want to keep track of the total number of bank accounts created by your application. This is a classic use case for a static data member.

*/

#include<iostream>
using namespace std;

class Bank{
    int id;
    string name;
    static int count;

    public:
    
    Bank(int n,string s){
        id=n;
        name=s;
        count++;
    }
    static void show(){
        cout<<"The count is "<<count<<endl;
    }
};

int Bank::count;

int main(){
    Bank obj(1,"rahi");
    Bank::show();
    Bank obj2(2,"ra");
    Bank::show();
    Bank obj3(3,"raf");
    Bank::show();
    Bank (4,"kal");
    Bank::show();



}
