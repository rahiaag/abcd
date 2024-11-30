// Given a string S, check if it is palindrome or not and returns an integer value 1 or 0.

#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

Reverse the string and check if the original and reversed string are same or not

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

string Reverse(string s, int low, int high)
{
    while (low < high)
    {
        swap(s[low++], s[high--]);
    }
    return s;
}

bool palindrome(string s)
{
    string d = Reverse(s, 0, s.size() - 1);
    return (s == d);
}

char UppertoLower(char ch) // When the string is NOT CASE SENSITIVE  means ( Noon and NooN ) will give you wrong answer
{
    if (ch >= 'a' and ch <= 'z')
        return ch;

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

/*-----------------------------------------------------

// Similar to the 3rd Approach but with extra space When there is uppercharacter and number present and character is case sensitive

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

bool Palindrome(string s)
{

    string t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            t.push_back(s[i] - 'A' + 'a');
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            t.push_back(s[i]);
        }

        else if (s[i] >= '0' && s[i] <= '9')
        {
            t.push_back(s[i]);
        }
    }

    int len = t.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (t[i] != t[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}


/*-----------------------------------------------------

4th Approach Through Recursion

Time Complexity : O(n)
Space Complecity : O(n)

-------------------------------------------------------*/

bool isPalindrom(string S, int low, int high)
{

    if (low >= high)
    {
        return true;
    }

    if (S[low] == S[high])
        return isPalindrom(S, low + 1, high - 1);

    else
        return false;
}

/*-----------------------------------------------------

3rd Approach Through Iteration

Time Complexity : O(n)
Space Complecity : O(1)

-------------------------------------------------------*/

bool isPalindrome(string S)
{
    int low = 0;
    int high = S.size() - 1;

    while (low < high)
    {

        if (UppertoLower(S[low]) != UppertoLower(S[high]))
        {
            cout << " It is not palindrome";
            return false;
        }
        S[low++];
        S[high--];
    }
    cout << "it is a palindrome";
    return true;
}

int main()
{
    string s;

    cout << "Enter the name :";
    cin >> s;
    int low = 0;
    int high = s.size() - 1;

    // cout << palindrome(s);
    //  cout << isPalindrom(s, low, high);
    return 0;
}

/*-----------------------------------------------------

- Uppercase Letters: `A` (65) to `Z` (90)
- Lowercase Letters: `a` (97) to `z` (122)

-------------------------------------------------------*/