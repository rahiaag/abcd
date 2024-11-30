/*

Given an integer x, return true if x is a
palindrome and false otherwise.

Input: x = 121
Output: true

Input: x = -121
Output: false

Input: x = 10
Output: false


*/

// Given Two array count the number of distinct element from the 2 array

/*-----------------------------------------------------

1st Approach Using Set

Time Complexity : O(nlogn)
Space Complecity : O(n+m)

-------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int a)
{
    if (a < 0)
    {
        return false;
    }

    long long temp = a;
    long value = 0;

    while (temp != 0)
    {
        int val = temp % 10;
        value = value * 10 + val;
        temp = temp / 10;
    }
    return (value == a);
}

int main()
{
    int a = 11211;
    cout << boolalpha << palindrome(a);
    return 0;
}
