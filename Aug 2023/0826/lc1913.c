// https://leetcode.cn/problems/maximum-product-difference-between-two-pairs/description/
int maxProductDifference(int* nums, int numsSize){
    int a = 0, b = 0, c = 10000, d = 10000;
    while(numsSize--){
        if(nums[numsSize] > a){
            if(nums[numsSize] > b){
                a = b; 
                b = nums[numsSize];
            }else{
                a = nums[numsSize];
            }
        }
        if(nums[numsSize] < c){
            if(nums[numsSize] < d){
                c = d;
                d = nums[numsSize];
            }else{
                c = nums[numsSize];
            }
        }
    }
    
    return a * b - c * d;
}