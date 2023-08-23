/*https://leetcode.cn/problems/how-many-numbers-are-smaller-than-the-current-number/description/*/

//暴力枚举
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++){
        ans[i] = 0;
        for(int j = 0; j < numsSize; j++){
            if(nums[j] < nums[i]) ans[i]++;
        }
    }
    return ans;
}

//排序查找
int swap(const void* a,const void* b){
    return *(int*)a - *(int*)b;
}

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;

    int* ans = (int*)malloc(numsSize * sizeof(int));
    
    int* tmp = (int*)malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++) tmp[i] = nums[i];

    qsort(tmp, numsSize, sizeof(int), swap);

    for(int i = 0; i < numsSize; i++){
        ans[i] = search(nums[i], tmp, numsSize);
    }

    return ans;
}
    //注意数据肯定可以被查找到，且可能出现重复数据。所以相应修改算法，返回最小下标。
int search(int num,int* nums,int numsSize){
    int left = 0;
    int right = numsSize-1;

    while(left < right){
        int mid = left + ((right - left)>>1);

        if(nums[mid] < num) left = mid + 1;
        else right = mid;
    }
    return left;
}


//哈希表
int swap(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int *ans = (int*)calloc(numsSize,sizeof(int));

    int *ht = (int*)calloc(110,sizeof(int));

    int *tmp = (int*)calloc(numsSize,sizeof(int));

    for(int i = 0; i < numsSize; i++) tmp[i] = nums[i];

    qsort(tmp, numsSize, sizeof(int), swap);

    for(int i = numsSize - 1; i >= 0; i--) ht[tmp[i]] = i;

    for(int i = 0; i < numsSize; i++) ans[i] = ht[nums[i]];

    *returnSize = numsSize;

    return ans;
}