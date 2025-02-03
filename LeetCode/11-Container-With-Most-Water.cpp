class Solution {
public:
    int maxArea(vector<int>& height) {

        int i=0;
        int j=height.size()-1;
        int maxWater=0;

        while (i<j){
            maxWater=max(maxWater,(min(height[i],height[j])*(j-i)));

            if (height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxWater;
    }
};

/*

int n=height.size();
        int maxWater=INT_MIN;

        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                int ans=min(height[i],height[j])*(j-i);
                maxWater=max(maxWater,ans);
            }
        }
        return maxWater;

    }
class Solution:
    def maxArea(self, height):
        i, j = 0, len(height) - 1
        water = 0
        while i < j:
            water = max(water, (j - i) * min(height[i], height[j]))
            if height[i] < height[j]:
                i += 1
            else:
                j -= 1
        return water
*/