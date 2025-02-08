#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n3, n4;

    cin >> n3 >> n4;

    string result = "";

    for (int i = 0; i < n3.size(); i++)
    {
        if (n3[i] != n4[i])
        {
            result += '1';
        }
        else if (n3[i]==n4[i])
        {
            result += '0';
        }
    }

    cout<<result;
    return 0;
}