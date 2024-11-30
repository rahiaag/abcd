// An Armstrong number is a number that is equal to the sum of its digits, each raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach (Optimized One)

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/
bool armStrong(int n)
{
    string num = to_string(n);
    int y = num.size();
    int answer = 0;

    for (auto i : num)
    {
        int number = i - '0';  // to change character in number
        answer += (number, y);
    }
    return (answer == n);
}

/*-----------------------------------------------------
Here we have to create a function which is tedious

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

int countDigit(int n)
{

    int count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

bool ArmStrong(int n)
{

    int num = n;
    int answer = 0;
    int digit = countDigit(n);

    while (num != 0)
    {
        int remain = num % 10;
        answer += pow(remain, digit);
        num /= 10;
    }

    return (answer == n);
}

int main()
{
    int n = 371;
    cout << boolalpha << ArmStrong(n);

    return 0;
}