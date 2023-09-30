/*https://leetcode.cn/problems/separate-the-digits-in-an-array/*/
int* separateDigits(int* nums, int numsSize, int* returnSize){

    int* answer = (int*)calloc(numsSize*6,sizeof(int));

    int j = 0;

    char str[7];

    for(int i = 0; i < numsSize; i++){
        int k = 0;
        sprintf(str,"%d",nums[i]);
        while(str[k]){
            answer[j++] = str[k++] - '0';
        }
    }

    *returnSize = j;

    return answer;
}
