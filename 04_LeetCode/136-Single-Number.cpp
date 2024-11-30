class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int x=0;
        for (int i=0;i<nums.size();i++){   // XOR with the same number will cancel out and at the end only single number will be there 
            x=nums[i]^x;
        }
        return x;
    }
};


/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {

  sort(nums.begin(),nums.end());
        int n=nums.size();

         for (int i = 0; i < n; i +=2) {
            // If the last element or the current element is not equal to the next element
 if (i == n - 1 || nums[i] != nums[i + 1]) { return nums[i];

            }
        }
       return -1;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int>val;
        int answer=0;

        for (auto i:nums){
            val[i]++;
        }
        for (auto i:val){
            if (i.second==1){
                answer=i.first;
            }
        }
        return answer;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
        set<int> mp;

        for (auto i : nums) {
            if (mp.count(i))
                mp.erase(i);
            else {
                mp.insert(i);
            }
        }
        return *mp.begin();
    }
};

*/