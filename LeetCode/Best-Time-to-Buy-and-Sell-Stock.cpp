class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int stock=INT_MAX;

        for (int i=0;i<n;i++){
        stock=min(stock,prices[i]);
        maxProfit=max(maxProfit,prices[i]-stock);
            
        }
        return maxProfit;
    }
};