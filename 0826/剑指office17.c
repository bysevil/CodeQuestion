// https://leetcode.cn/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/

int* printNumbers(int n, int* returnSize){
    *returnSize = pow(10,n) - 1;
    int* ans = calloc(*returnSize, sizeof(int));

    for(int i = 0; i < *returnSize; i++){
        ans[i] = i + 1;
    }

    return ans;
}