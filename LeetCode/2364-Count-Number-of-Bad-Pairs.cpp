class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        int n = nums.size();
        long count = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            count += i - mp[i - nums[i]]++;
        }
        return count;
    }
};