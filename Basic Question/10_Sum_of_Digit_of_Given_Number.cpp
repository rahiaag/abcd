#include <iostream>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/
int SumofDigit(int n)
{
    int sum = 0;

    while (n != 0)
    {
        int remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    return sum;
}

/*-----------------------------------------------------

2nd Approach

Time Complexity : O(n)
Space Complexity : O(n) Due to Recursion Stack

-------------------------------------------------------*/
int RecursiveSumofDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 10 + RecursiveSumofDigit(n / 10);
}
int main()
{
    int n;
    cout << "Enter the Number :" << endl;
    cin >> n;

    cout << SumofDigit(n);

    return 0;
}