// https://leetcode.cn/problems/replace-elements-with-greatest-element-on-right-side/description/
int* replaceElements(int* arr, int arrSize, int* returnSize){
    int max = arr[arrSize - 1];
    for(int i = arrSize - 2; i >= 0; i--){
        int tmp = arr[i];
        arr[i] = max;
        if(tmp > max)  max = tmp;
    }

    arr[arrSize-1] = -1;

    *returnSize = arrSize;
    return arr;
}