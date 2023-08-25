// https://leetcode.cn/problems/decode-xored-array/
int* decode(int* encoded, int encodedSize, int first, int* returnSize){

    *returnSize = encodedSize + 1;

    int* ans = calloc(*returnSize, sizeof(int));

    ans[0] = first;

    for(int i = 0; i < encodedSize; i++){
        ans[i+1] = encoded[i] ^ ans[i];
    }

    return ans;
}