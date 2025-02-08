/*Time complexity:
O(n)

Space complexity:
O(1)

Code 1 ( Two Pointer Approach)*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    int j=0;
    for (int i=1;i<nums.size();i++){
        if (nums[i]!=nums[j]){
            j++;
            nums[j]=nums[i];
        }
    }

    return j+1;
    }
};

/*
Time complexity:
O(n)

Space complexity:
O(n)

Code 2 (Using Stack)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> ans;
        stack<int> ans2;
        int n = nums.size();

        ans.push(nums[0]);

        for (int i = 1; i < n; i++) {
            if (ans.top() != nums[i]) {
                ans.push(nums[i]);
            }
        }
        int w = ans.size();
        for (int i=0;i<w;i++) {
            int val=ans.top();
            ans2.push(val);
            ans.pop();
        }

        for (int i = 0; i < w; i++) {
            nums[i] = ans2.top();
            ans2.pop();
        }
        return w;
    }
};
*/

/*
Time complexity:
O(nLogn)

Space complexity:
O(n)

Code 3 (Using Set)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int>ans(nums.begin(),nums.end());
    nums.assign(ans.begin(),ans.end());
    return nums.size();
    }
};
*/