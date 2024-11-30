#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach using Temprory Variable

Time Complexity : O(1)
Space Complexity : O(1)

-------------------------------------------------------*/

void swap(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

// 2nd Approach Using In-Built Function swap

/*-----------------------------------------------------

3rd Approach using Bitwise Operation

Time Complexity : O(1)
Space Complexity : O(1)

-------------------------------------------------------*/

void Operation(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

/*-----------------------------------------------------

4th Approach using Mathematics

Time Complexity : O(1)
Space Complecity : O(1)

-------------------------------------------------------*/

void MatheMatics(int &a, int &b)
{
    // a=10 b=5
    a = a + b; // a=15 b=5
    b = a - b; // a=15 b=10
    a = a - b; // a=5 b=10
}

int main()
{
    int a, b;
    cout << "Enter the Number :" << endl;
    cin >> a >> b;

    cout << "Before Swap" << endl;
    cout << "The value of a is " << a << " and B is " << b << endl;

    swap(a, b);

    cout << "After Swap" << endl;
    cout << "The value of a is " << a << " and B is " << b;

    return 0;
}