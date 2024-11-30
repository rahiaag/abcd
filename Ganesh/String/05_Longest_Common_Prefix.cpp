#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &s)
{

    string ans = "";
    int len = s.size();
    sort(s.begin(), s.end());

    string first = s[0];      // pointing toward first word of the array
    string last = s[len - 1]; // pointing toward Last word of the array

    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            break;
        }
        else
        {
            ans += first[i];
        }
    }
    return ans;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(strs);
    return 0;
}