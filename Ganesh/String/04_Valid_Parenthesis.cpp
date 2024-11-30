#include <bits/stdc++.h>
using namespace std;

bool parenthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }

        else
        {
            if (st.size() == 0)
                return 0;

            if (s[i] == ')' && st.top() != '(')
                return false;
            if (s[i] == '}' && st.top() != '{')
                return false;
            if (s[i] == ']' && st.top() != '[')
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s = "[[{)()}]]";
    cout << boolalpha << parenthesis(s);
    return 0;
}
