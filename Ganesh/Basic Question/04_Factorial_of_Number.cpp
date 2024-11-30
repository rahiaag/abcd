#include <iostream>
using namespace std;

// Function that multiplies a number by every number below it till 1

/*-----------------------------------------------------

1st Approach using Loop

Time Complexity : O(N)
Space Complexity : O(1)

-------------------------------------------------------*/

int Factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

/*-----------------------------------------------------

2nd Approach Recursive Function

Time Complexity : O(n)  Because there are N recursive Call
Space Complexity : O(n) (due to the call stack)

The call stack is a special data structure that stores information about the active subroutines or function calls in a program

-------------------------------------------------------*/

int RecursiveFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * RecursiveFactorial(n - 1);
}
int main()
{
    int n = 5;
    // cout << Factorial(n);
    cout << RecursiveFactorial(n);

    return 0;
}