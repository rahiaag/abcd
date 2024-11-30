class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;
        int sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            sum2 += nums[i];
        }
        return (sum - sum2);
    }
};

/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int xor1 = 0;
        int xor2 = 0;
        int n = nums.size();

        // XOR all elements in the array
        for (int i = 0; i < n; i++) {
            xor1 ^= nums[i];
        }

        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; i++) {
            xor2 ^= i;
        }
    

        // XOR of xor1 and xor2 gives the missing number
        return xor1 ^ xor2;
    }
};




class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i)
            {
                return i;
            }
        }
        return n;
    }
};



class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        unordered_map<int, int> answer;
        int val = 0;
        for (auto i : nums)
        {
            answer[i]++;
        }

        for (int i = 0; i <= nums.size(); i++)
        {
            if (answer[i] == 0)
            {
                val = i;
            }
        }
        return val;
    }
};
*/