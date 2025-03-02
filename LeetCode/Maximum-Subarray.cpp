class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currSum=0;
        int maxSum=INT_MIN;

        for (int i=0;i<n;i++){
            currSum=max(currSum+nums[i],nums[i]);
            maxSum=max(currSum,maxSum);
        }
        return maxSum;
    }
};