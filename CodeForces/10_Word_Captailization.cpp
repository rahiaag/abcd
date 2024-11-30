/*
Question Link : https://codeforces.com/problemset/problem/281/A

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
Input
ApPLe
Output
ApPLe

Input
konjac
Output
Konjac

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 'a' + 'A';
    }

    for (int i = 0; i < s.size(); i++)
    {
        result += s[i];
    }
    cout << result;
    return 0;
}