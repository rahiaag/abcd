#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*-----------------------------------------------------

Time Complexity : O(n^2)  (Brute Force)
Space Complecity : O(1)

-------------------------------------------------------*/

int Maxprofit(vector<int> &prices)  
{
    int n = prices.size();
    int maxProfit = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }
    return maxProfit;
}

/*-----------------------------------------------------

Time Complexity : O(N)  (Optimal Solution)
Space Complecity : O(1)

-------------------------------------------------------*/

int maxprofit(vector<int> &prices)
{
    int n = prices.size();
    int maxProfit=0;
    int Days=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        Days=min(Days,prices[i]);
        maxProfit=max(maxProfit,prices[i]-Days);
    }
    return maxProfit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxprofit(prices);

    return 0;
}
