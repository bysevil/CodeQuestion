/*https://leetcode.cn/problems/find-numbers-with-even-number-of-digits/description/*/
int findNumbers(int* nums, int numsSize){
    int num = 0;

    for(int i = 0; i < numsSize; i++){
        if( 10 <= nums[i] && nums[i] < 100) num++;
        else if( 1000 <= nums[i] && nums[i] < 10000) num++;
        else if(nums[i] == 100000) num++;
    }

    return num;
}