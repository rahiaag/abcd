/*
Question Link : https://codeforces.com/problemset/problem/50/A

Question: Given a M × N rectangular board, find the maximum number of 2×1 dominoes that can be placed on it without overlapping and while covering only board spaces.

Input:

Two integers, M and N (1 ≤ M ≤ N ≤ 16), representing board dimensions.
Output:

Print the maximum number of dominoes that can be placed.
Example:

Input:
2 4

Output:
4
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int n;

    cin >> m;
    cin >> n;

    int answer = m * n;
    cout << answer / 2;

    return 0;
}