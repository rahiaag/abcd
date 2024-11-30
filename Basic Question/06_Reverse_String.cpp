#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*-----------------------------------------------------

1st Approach Using Two Pointer

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

string Reverse_String(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        swap(s[i++], s[j--]);
    }
    return s;
}

/*-----------------------------------------------------

2nd Approach Using Loop

Time Complexity : O(n)
Space Complexity : O(n)

-------------------------------------------------------*/
string ReverseString(string s)
{
    int n = s.size();
    string result(n, ' '); // Corrected: Initialized result with size n

    for (int i = n - 1; i >= 0; i--)
    {
        result[n - i - 1] = s[i];
    }
    return result;
}

/*-----------------------------------------------------

// 3rd Approach Using In-built function that is reverse

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

/*-----------------------------------------------------

// 4th Approach Using Stack

Time Complexity : O(n)
Space Complexity : O(n)

-------------------------------------------------------*/

string ReverseFunction(string s)
{
    int n = s.size();
    stack<char> ans;
    string result(n, ' '); // Corrected: Initialized result with size n

    for (auto i : s)
    {
        ans.push(i);
    }

    for (int i = 0; i < s.size(); i++)
    {
        result[i] = ans.top();
        ans.pop();
    }
    return result;
}

int main()
{
    string s = "rahi";
    cout << ReverseString(s) << endl;
    cout << Reverse_String(s) << endl;
    cout << ReverseFunction(s) << endl;

    return 0;
}