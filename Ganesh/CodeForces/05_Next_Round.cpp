/*
Question Link : https://codeforces.com/problemset/problem/158/A

In a contest with n participants, those scoring at least as much as the k-th place finisher's score advance to the next round, provided their score is positive.

Input:
n (number of participants) and k (position for qualifying score).
A list of n scores in non-increasing order.

Output:
Print the number of participants who advance.

Example:

Input:
8 5
10 9 8 7 7 7 5 5

Output:
6

In this example, the 5th place score is 7, and 6 participants scored at least 7.

*/

#include <bits/stdc++.h>
using namespace std;

int participantCount(vector<int> participant, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (participant[i] >= participant[k-1] && participant[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;

    vector<int> participant(n);

    for (int i = 0; i < n; i++)
    {
        cin >> participant[i];
    }

    cout << participantCount(participant, n, k);
    return 0;
}