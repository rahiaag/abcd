class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        int maxProfit=0;
        int buystock=INT_MAX;

        for (int i=0;i<n;i++){
            buystock=min(buystock,prices[i]);
            maxProfit=max(maxProfit,prices[i]-buystock);

        }
        return maxProfit;
    }
};