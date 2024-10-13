class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        vector<int>ans;
        for (auto i:nums){
            ans.push_back(i);
        }
        for (int i=0;i<n;i++){
        nums[(i+k)%n]=ans[i];
        }


      /*
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        */
    }
};


