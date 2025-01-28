class Solution {
public:
    void solve(int index, vector<vector<int>>& ans, vector<int>& nums,unordered_set<string>& st) {
        if (index == nums.size()) {

            string key = "";
            for (auto num : nums) {
                key += to_string(num);
            }
            if (st.find(key) == st.end()) {
                ans.push_back(nums);
                st.insert(key);
            }
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(index + 1, ans, nums, st);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_set<string> st;
        solve(0, ans, nums, st);
        return ans;
    }
};