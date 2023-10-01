// https://leetcode.cn/problems/house-robber-ii/?envType=daily-question&envId=2023-09-17

int rob(int* nums, int numsSize){
    if(numsSize == 1) return nums[0];
    else if(numsSize == 2){
        if(nums[0] > nums[1]) return nums[0];
        else return nums[1];
    }else if(numsSize == 3){
        if(nums[0] > nums[1]) nums[1] = nums[0];
        if(nums[1] > nums[2]) nums[2] = nums[1];
        return nums[2];
    } 
    int a = nums[0],b = nums[1];
    if(b < a) b = a;
    for(int i = 2; i < numsSize - 1; i++){
        a += nums[i];
        if(a < b) a = b;
        else{
            a ^= b; b ^= a; a ^= b;
        }
    }
    int x = nums[1], y = nums[2];
    if(y < x) y = x;
    for(int i = 3; i < numsSize; i++){
        x += nums[i];
        if(x < y) x = y;
        else{
            x ^= y; y ^= x; x ^= y;
        }
    }
    return fmax(fmax(a,b),fmax(x,y));
}