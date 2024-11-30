/*
Question Link : https://codeforces.com/problemset/problem/486/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Mathematical Formula

    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << (n / 2) << endl;
    }
    else
    {
        cout << -(n + 1) / 2 << endl;
    }
}

/*
// Brute force Approach (Time Limit Exceed Problem)
int n;
cin >> n;
int sum = 0;
int sign = -1;

for (int i = 1; i <= n; i++)
{
    sum += sign * i;
    sign *= -1;
}

cout << sum;

return 0;
*/