/*
Question Link : https://codeforces.com/problemset/problem/71/A

Given n words, replace each word longer than 10 characters with an abbreviation: the first letter, the number of characters in between, and the last letter. Leave words with 10 or fewer characters unchanged.

Input:

An integer n (1 ≤ n ≤ 100).
n lines follow, each containing one word of 1 to 100 lowercase Latin letters.
Output:
Print n lines, where each line is the abbreviated form of the input word if it is longer than 10 characters.

Example:
Input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output:

word
l10n
i18n
p43s

*/

#include <bits/stdc++.h>
using namespace std;

string TooLong(string word)
{
    int n = word.length();
    string result = "";

    if (n <= 10)
    {
        return word;
    }
    else
    {
        n = n - 2;
        string y = to_string(n);
        result += word[0] + y + word.back();
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<string> word(n);

    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << TooLong(word[i]) << endl;
    }

    return 0;
}