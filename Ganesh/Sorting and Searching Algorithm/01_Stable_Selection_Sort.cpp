#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{

    int MinIndex;

    for (int i = 0; i < n - 1; i++)
    {
        MinIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[MinIndex])

            {
                MinIndex = j;
            }
        }
        int temp = arr[MinIndex];

        for (int k = MinIndex; k > i; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[i] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    cout << endl;
    printArray(A, n);

    return 0;
}

#Complexity
- Time complexity:
           <!--Add your time complexity here, e.g.$$O(n)$$-->

           - Space
       complexity:
           <!--Add your space complexity here, e.g.$$O(n)$$-->

#Code
```cpp[] class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        unordered_map<int, int> val;
        int answer = 0;

        for (auto i : nums)
        {
            val[i]++;
        }
        for (auto i : val)
        {
            if (i.second == 1)
            {
                answer = i.first;
            }
        }
        return answer;
    }
};
```

#Complexity
    - Time complexity : <!--Add your time complexity here, e.g.$$O(n) $$-->

                        -
                        Space complexity : <!--Add your space complexity here, e.g.$$O(n) $$-->

#Code
```cpp[] class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        set<int> mp;

        for (auto i : nums)
        {
            if (mp.count(i))
                mp.erase(i);
            else
            {
                mp.insert(i);
            }
        }
        return *mp.begin();
    }
};
```
#Complexity
    - Time complexity : <!--Add your time complexity here, e.g.$$O(n) $$-->

                        -
                        Space complexity : <!--Add your space complexity here, e.g.$$O(n) $$-->

#Code
```cpp[] class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int x = 0;
        for (int i = 0; i < nums.size(); i++)
        { // XOR with the same number will
            cancel out and at the end only single number will be there x = nums[i] ^ x;
        }
        return x;
    }
};
```
#Complexity
    - Time complexity : <!--Add your time complexity here, e.g.$$O(n) $$-->

                        -
                        Space complexity : <!--Add your space complexity here, e.g.$$O(n) $$-->

#Code
```cpp[] class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        sort(nums.begin(), nums.end()); // Brute force approach
        int n = nums.size();

        for (int i = 0; i < n; i += 2)
        {
            // If the last element or the current element is not equal to the next element
            if (i == n - 1 || nums[i] != nums[i + 1])
            {
                return nums[i];
            }
        }

        return -1;
    }
};
```