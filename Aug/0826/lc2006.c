// https://leetcode.cn/problems/count-number-of-pairs-with-absolute-difference-k/description/

// 枚举
int countKDifference(int* nums, int numsSize, int k){
    int ans = 0;
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = numsSize - 1; j > i; j--){
            if(abs(nums[i] - nums[j]) == k) ans++;
        }
    }
    return ans;
}

// 哈希
int countKDifference(int* nums, int numsSize, int k){

    int hashtabs[101] = { 0 };
    for(int i = 0; i < numsSize; i++){
        hashtabs[nums[i]]++;
    } 

    int ans = 0;
    for(int i = 0; i < numsSize; i++){
        int tmp = nums[i] - k;
        if(tmp >= 0 && tmp <= 100){
            ans += hashtabs[tmp];
        }
    }
    return ans;
}
