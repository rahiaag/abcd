/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let result;
    for (let i=0;i<nums.length;i++){
        result=result^nums[i];
    }
    return result;
};