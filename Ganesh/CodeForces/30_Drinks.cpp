#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans(n);

    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += ans[i];
    }

     float result = sum / n;

    cout << result;
}


function AverageNumber(){

    let val=parseInt(prompt("Enter the Value :"));

    let arr=[];

    let sum=0;

    for (let i=0;i<val;i++){
        arr.push(parseInt(prompt()))
    }

    for (let i=0;i<val;i++){
        sum+=arr[i];
    }
}