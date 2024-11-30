// Anagram means rearranging the original words and only using the letter present in the original words

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach using Unordered Map

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

bool AnagramCheck(string s, string t)
{

    if (s.length() != t.length())
    {
        return false;
    }

    unordered_map<char, int> ans;

    for (auto i : s)
    {
        ans[i]++;
    }

    for (auto i : t)
    {
        ans[i]--;
    }

    for (auto i : ans)
    {
        if (i.second != 0)
        {
            return false;
        }
    }
    return true;
}

/*-----------------------------------------------------

2nd Approach Using Sorting

Time Complexity : O(nLogn)
Space Complexity : O(Log n) Due to Sorting Algorithm

-------------------------------------------------------*/

bool anagramCheck(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return (s == t);
}
int main()
{
    string s = "rahi";
    string t = "ihar";
    cout << boolalpha << anagramCheck(s, t);

    return 0;
}