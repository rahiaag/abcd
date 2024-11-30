#include <bits/stdc++.h>
using namespace std;

// Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones. 

/*-----------------------------------------------------

1st Approach Recursive Function

Time Complexity : O(2^n)  (Exponential due to repeated calculations)
Space Complexity : O(n) (Due to recursion call stack)

It will return the Nth Fabonacci Number

-------------------------------------------------------*/

int FabonacciSequence(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return FabonacciSequence(n - 1) + FabonacciSequence(n - 2);
    }
}

/*-----------------------------------------------------

2nd Approach Space Optimized

Time Complexity : O(n)  (Each value is calculated Once)
Space Complexity : O(1)

Will Return the Nth Element
-------------------------------------------------------*/

int FabonacciSeries(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    int current;
    int prev1 = 0;
    int prev2 = 1;

    for (int i = 1; i <= n; i++)
    {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}
int main()
{
    int n = 5;

    for (int i = 0; i <= n; i++)
        cout << FabonacciSequence(i) << " ";

    return 0;
}