#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    int AccountNo;
    string HolderName;

    void setId(int No)
    {
        AccountNo = No;
    }

    int getId()
    {
        return AccountNo;
    }

    void setName(string Name)
    {

        HolderName = Name;
    }

    string getName()
    {
        return HolderName;
    }
};

int main()
{
    Bank detail;
    detail.setName("Rahi");
    detail.setId(2001);
    cout << detail.getId() << endl;
    cout << detail.getName();

    return 0;
}