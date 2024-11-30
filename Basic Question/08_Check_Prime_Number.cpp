#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Prime Number are the number which is Completely Divisible by 1 and its own only

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

bool PrimeNumber(int n)
{
    if (n==0 || n==1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

/*
Other Method is Sieve of Eratosthenes
This is an efficient algorithm to find all prime numbers up to a given limit N. It can be used to check if a specific number is prime by generating all primes up to that number.

Time Complexity: O(n log(log(n))) for generating all primes up to N
Space Complexity: O(n)

*/

int main()
{
    int n;
    cout << "Enter the Number :" << endl;
    cin >> n;

    cout << boolalpha << PrimeNumber(n);

    return 0;
}