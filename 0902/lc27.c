int removeElement(int* nums, int numsSize, int val){
    numsSize--;
    for(int i = numsSize; i >= 0; i--){
        if(nums[i] == val){
            if(numsSize != i) nums[i] = nums[numsSize];
            numsSize--;
        } 
    }
    numsSize++;
    return numsSize;
}