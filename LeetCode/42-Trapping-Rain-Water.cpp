class Solution {
public:
    vector<int> leftMax(vector<int> arr) {
        vector<int> left;

        int n = arr.size();
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {

            if (arr[i] >= maxi) {
                maxi = max(maxi, arr[i]);
            }
            left.push_back(maxi);
        }
        return left;
    }
    vector<int> rightMax(vector<int> arr) {
        vector<int> right;
        int maxi = INT_MIN;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxi) {
                maxi = max(maxi, arr[i]);
            }
            right.insert(right.begin(),maxi);
        }
        return right;
    }
    int trap(vector<int>& height) {

        vector<int> left = leftMax(height);
        vector<int> right = rightMax(height);
        int n = height.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += min(left[i], right[i]) - height[i];
        }
        return sum;
    }
};