#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

void GCDandLCM(int a, int b)
{

    int multiply = a * b;

    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = max(gcd, i);
        }
    }
    int lcm = multiply / gcd;   

    cout << "The GCD is :" << gcd << endl;
    cout << "The LCM is :" << lcm << endl;
}
/*-----------------------------------------------------

Using In-Built Function
gcd(a, b)
-------------------------------------------------------*/

int main()
{
    int a, b;
    cout << "Enter the Numbers :" << endl;
    cin >> a >> b;

    GCDandLCM(a, b);

    return 0;
}