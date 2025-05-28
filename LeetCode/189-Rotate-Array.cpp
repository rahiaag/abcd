class Solution {
public:
    void rotate(vector<int>& nums, int k) {   // Time Complexity O(N) Space Complexity O(1)
       /* int n=nums.size();
        k=k%n;

        vector<int>ans;
        for (auto i:nums){
            ans.push_back(i);
        }
        for (int i=0;i<n;i++){
        nums[(i+k)%n]=ans[i];
        }*/


      
        int n=nums.size();               // Time Complexity O(N) Space Complexity O(1)
        k=k%n;
        reverse(nums.begin(),nums.end());   
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};


