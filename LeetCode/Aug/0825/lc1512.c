// https://leetcode.cn/problems/number-of-good-pairs/

//枚举
int numIdenticalPairs(int* nums, int numsSize){

    int ans = 0;

    for(int i = 0; i < numsSize; i++){
        for(int j = i+1; j < numsSize; j++){
            if(nums[i] == nums[j]) ans++;
        }
    }

    return ans;
}

//哈希
int numIdenticalPairs(int* nums, int numsSize){

    int ans = 0;

    int hashtabs[101] = {0};

    for(int i = 0; i < numsSize; i++){
        if(hashtabs[nums[i]]) {
            ans += hashtabs[nums[i]];
            hashtabs[nums[i]]++;
        }
        else hashtabs[nums[i]] = 1;
    }
    return ans;
}