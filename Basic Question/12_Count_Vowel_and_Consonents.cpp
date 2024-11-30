#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------

1st Approach

Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/


vector<int> VowelandConsonent(string s)
{
    int vowel = 0;
    int n = s.size();

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
        {
            vowel++;
        }
    }

    return {vowel, n - vowel};
}


/*-----------------------------------------------------

Optimization and Alternative
Time Complexity : O(n)
Space Complexity : O(1)

-------------------------------------------------------*/

vector<int>Optimized(string s){
    unordered_set<char>vowels={'a','e','i','o','u'};
    int vowel=0;
    int n=s.size();

// end() refers to an iterator that points one past the last element of a container, such as a vector, set, or map.
// An iterator in C++ is an object (like a pointer) that allows you to traverse or navigate through the elements of a container
    for (int i=0;i<s.size();i++){
        if (vowels.find(s[i])!=vowels.end()){
            vowel++;
        }
    }
    return {vowel,n-vowel};
}
int main()
{
    string s = "rahi";
    vector<int> result = VowelandConsonent(s);

        for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}