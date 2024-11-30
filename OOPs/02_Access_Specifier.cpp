/*

:- Access Specifier are Special types of keywords that are used to control the accessibilty of entities like Classes, Method.
:- Private, Public and Protected are access specifier or access modifier.


Access Specifier | Accessible in the Same Class | Accessible in Derived Classes | Accessible Outside the Class
-----------------|------------------------------|-------------------------------|-----------------------------|
Public           |  Yes                         | Yes                           | Yes
Protected        |  Yes                         | Yes                           | No
Private          |  Yes                         | No                            | No


:- Public Modifier can be Accessed from anyWhere (same Class, Derieved Class and From Outside).
:- Protected Member can only be Accessed within same class and Derived Class.
:- Private Member can be accessed within the Same class

*/

#include <iostream>
using namespace std;

class Specifier
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

int main()
{
    Specifier obj;

    // obj.a=23;        // Will Not be Assigned
    // obj.b=45;        // Will Not be Assigned
    obj.c = 12;

    // cout<<"Private Member "<<obj.a<<endl;
    // cout<<"Protected Member "<<obj.b<<endl;
    cout << "Public Member " << obj.c << endl;

    return 0;
}
