#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach Using Sorting

Time Complexity : O(nlogn)
Space Complecity : O(1)

-------------------------------------------------------*/

bool isAnagram(string s, string t)
{

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return (s == t);
}

/*-----------------------------------------------------

1st Approach Using Sorting

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

bool IsAnagram(string s, string t)
{

    unordered_map<char, int> mp;

    for (auto i : s)
    {
        mp[i]++;
    }

    for (auto i : t)
    {
        mp[i]--;
    }

    for (auto i : mp)
    {
        if (i.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << boolalpha << isAnagram(s, t);

    return 0;
}