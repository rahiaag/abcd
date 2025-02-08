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
/*

ANCHOR #include <iostream>
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
*/

#include <iostream>
using namespace std;

class Specifier
{
private:
    int seta;

protected:
    int setb;

public:
    int c;

    void setFunction(int a,int b)
    {
         seta = a;
         setb =b;
    }
    int getFunction()
    {
        return seta;
        return setb;
    }
};

int main()
{
    Specifier obj;

    obj.setFunction(123,31);
    cout << obj.getFunction() << endl;

    return 0;
}
