/*

Question Link : https://codeforces.com/problemset/problem/282/A

In Bit++, there is one variable, x, initially set to 0. There are two operations:

++X or X++ to increase x by 1.
--X or X-- to decrease x by 1.
You are given a sequence of n statements. Execute all statements and find the final value of x.

Input:

The first line contains an integer n (1 ≤ n ≤ 150).
Each of the next n lines contains a statement: ++X, X++, --X, or X--.

Output:
Print the final value of x.

Examples:

Input:
1
++X

Output:
1

Input:
2
X++
--X

Output:
0

*/

#include <bits/stdc++.h>
using namespace std;

int bitManipulation(int n, vector<string> alpha)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (alpha[i] == "++X" || alpha[i] == "X++")
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<string> alpha(n);

    for (int i = 0; i < n; i++)
    {
        cin >> alpha[i];
    }

    cout << bitManipulation(n, alpha);  

    return 0;
}