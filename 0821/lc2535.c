/*https://leetcode.cn/problems/difference-between-element-sum-and-digit-sum-of-an-array/*/
int differenceOfSum(int* nums, int numsSize){
    int s1 = 0, s2 = 0;
    for(int i = 0; i < numsSize; i++){
        s1 += nums[i];
        while(nums[i]){
            s2 += nums[i]%10;
            nums[i] /= 10;
        }
    }
    return s1 - s2;
}