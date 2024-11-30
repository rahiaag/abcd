#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Palindrome : A word which read same as forward as well as backward

/*-----------------------------------------------------

1st Approach Using Loop

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

bool Palindrome(string s)
{

    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

/*-----------------------------------------------------

2nd Approach Reversing the String and checking the original with newly Created

Time Complexity : O(n) Using Reverse (In-Built Function)
Space Complexity : O(1)

-------------------------------------------------------*/

string ReverseString(string s)
{
    reverse(s.begin(), s.end());

    return s;
}
bool PalindromeCheck(string s)
{
    string t = ReverseString(s);

    return (s == t);
}

int main()
{
    string s = "raar";
    cout << boolalpha << PalindromeCheck(s);

    return 0;
}