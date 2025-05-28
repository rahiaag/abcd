/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;

        for (int i=0;i<nums.size();i++){
            int sum=0;

            for (int j=i;j<nums.size();j++){
                sum+=nums[j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currSum=0;
        int maxSum=INT_MIN;

        for (int i=0;i<nums.size();i++){
           currSum=max(currSum+nums[i],nums[i]);
           maxSum=max(maxSum,currSum) ;
        }
        return maxSum;
    }
};