/*https://leetcode.cn/problems/search-insert-position/description/*/
int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize-1;
    int mid;
    while(left<=right){
        mid = left + (right - left >> 1);
        if(nums[mid] >= target) right = mid-1;
        else left = mid+1;
    }
    return left;
}