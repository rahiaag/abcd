class Solution {
public:
    void sortColors(vector<int>& nums) {
       /*
        int countZero=0;
        int countOne=0;
        int countTwo=0;
        int n=nums.size();

        for (int i=0;i<n;i++){
            if (nums[i]==0){
                countZero++;
            }
            else if (nums[i]==1){
                countOne++;
            }
            else{
                countTwo++;
            }
        }

        for (int i=0;i<countZero;i++){
            nums[i]=0;
        }
        for (int i=countZero;i<(countZero+countOne);i++){
            nums[i]=1;
        }
        for (int i=countZero+countOne;i<n;i++){
            nums[i]=2;
        }
        */

        int low=0;
        int mid=0;
        int high=nums.size()-1;

        while (mid<=high){

            if (nums[mid]==0){
                swap(nums[mid++],nums[low++]);
            }
            else if (nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else{
                mid++;
            }
        }
    }
};