#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 3)
    {
        return true;
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

// Function to count prime-composite pairs in an array
int countPrimeCompositePairs(vector<int> &arr)
{
    int count = 0;
    int n = arr.size();
    vector<int> prime;
    vector<int> composite;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]) == true)
        {
            prime.push_back(arr[i]);
        }
        else
        {
            composite.push_back(arr[i]);
        }
    }

    count = prime.size() * composite.size();

    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 8};

    int result = countPrimeCompositePairs(arr);
    cout << "Number of prime-composite pairs: " << result << endl;

    return 0;
}
