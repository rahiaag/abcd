#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Sorting (Brute)

Time Complexity : O(nlogn)
Space Complecity : O(1)

-------------------------------------------------------*/

int MajorityElement(vector<int> arr)
{
    int n = arr.size(); 
    sort(arr.begin(), arr.end());
    return arr[n / 2];
}

/*-----------------------------------------------------

2nd Approach Using the Unodered Map (Better)

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

int majorityElement(vector<int> arr) 
{
    unordered_map<int, int> mp;
    int n = arr.size();

    for (auto i : arr)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        if (i.second >= n / 2)
            cout << i.first << " ";
    }
}

/*-----------------------------------------------------

3rd Approach Boyer Moore Voting Algorithm (Optimal)

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

int Majorityelement(vector<int> arr)
{
    int count = 0;
    int candidate = 0;

    for (auto num : arr)
    {
        if (count == 0)
        {
            candidate = num;
        }

        if (num == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 3, 4, 2, 2, 2};
    majorityElement(arr);
    cout << endl;
    cout << MajorityElement(arr);
    cout<<endl;
    cout << Majorityelement(arr);

    return 0;
}