// https://leetcode.cn/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150

// Boyer-Moore 投票算法
int majorityElement(int* nums, int numsSize){
    int ans = nums[0], flag = 0;
    for(int i = 0; i < numsSize; i++){
        if(flag == 0) ans = nums[i];
        if(nums[i] != ans) flag--;
        else flag++;
    }
    return ans;
}