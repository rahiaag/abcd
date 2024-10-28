class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n / 2];
    }
};

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();

        for (auto i:nums){
            mp[i]++;
        }
        for (auto i:mp){
            if (i.second>n/2){
                return i.first;
            }
        }
        return 0;
    }
};
*/
