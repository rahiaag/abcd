/*
Question Link : https://codeforces.com/problemset/problem/1030/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>num(n);

    for (int i=0;i<n;i++){
        cin>>num[i];
    }

    for (int i=0;i<n;i++){
        if (num[i]==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
     return 0;
}