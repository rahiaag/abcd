/*
Question Link : https://codeforces.com/problemset/problem/4/A

Given an integer w (1 ≤ w ≤ 100), which represents the weight of a watermelon, determine if it can be divided into two parts, each with an even weight and positive value.

Output:
Print "YES" if it can be divided as described, otherwise print "NO".

Examples:
Input: 8
Output: YES

Input: 3
Output: NO

*/

#include <bits/stdc++.h>
using namespace std;

void weightWatermelon(int w)
{
    if (w >2 && w%2==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    int w;
    cin >> w;
    weightWatermelon(w);
    return 0;
}


// You just need to check if the weight is even and greater than 2 because every Even greater number than 2 can be divided into 2 part even parts