#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n) Due to Recursive Call
Space Complexity : O(n)  due to the recursive stack

-------------------------------------------------------*/

int ans(int n, int power)
{

    if (power == 0)
    {
        return 1;
    }

    return n * ans(n, power - 1);
}

// 2nd Approach Using In-Built Function pow(n,power);

int main()
{

    int n = 2;
    int power = 10;
    cout << ans(n, power);

    return 0;
}