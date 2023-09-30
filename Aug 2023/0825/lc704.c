// https://leetcode.cn/problems/binary-search/description/
int search(int* nums, int numsSize, int target){
    int right = numsSize - 1;
    int left = 0;

    while(left <= right){
        int mid = left + (right - left >> 1);
        if(target < nums[mid]) right = mid - 1;
        else if(target > nums[mid]) left = mid + 1;
        else return mid;
    }

    return -1;
}