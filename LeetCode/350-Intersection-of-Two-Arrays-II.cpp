class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        unordered_map<int,int>st;
        for (auto i:nums1){
            st[i]++;
        }
        
        for (int i=0;i<nums2.size();i++){
            if (st.find(nums2[i])!=st.end() && st[nums2[i]]!=0){
                ans.push_back(nums2[i]);
                st[nums2[i]]--;
            }
        }
        return ans;
    }
};