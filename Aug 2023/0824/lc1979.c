/*https://leetcode.cn/problems/find-greatest-common-divisor-of-array/submissions/*/
int findGCD(int* nums, int numsSize){
    int min = 1000,max = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > max) max = nums[i];
        if(nums[i] < min) min = nums[i];
    }

    int tmp;
    while(tmp = max % min){
        max = min;
        min = tmp;
    }
    
    return min;
}