/*https://leetcode.cn/problems/sort-the-people/description/*/
//冒泡排序
char ** sortPeople(char ** names, int namesSize, int* heights, int heightsSize, int* returnSize){
    for(int i = namesSize - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(heights[j] < heights[j+1]){
                heights[j] ^= heights[j+1];
                heights[j+1] ^= heights[j];
                heights[j] ^= heights[j+1];
                char* p = names[j];
                names[j] = names[j+1];
                names[j+1] = p;
            }
        }
    }
    *returnSize = namesSize;
    return names;
}

//快速排序
void quick_sort(char** names,int* heights,int left,int right){
    if(left >= right) return;

    int tmp = left;
    int i = left,j = right;

    while(i <= j){
        while(heights[i] > heights[tmp]) i++;
        while(heights[j] < heights[tmp]) j--;

        if(i <= j){
                heights[j] ^= heights[i];
                heights[i] ^= heights[j];
                heights[j] ^= heights[i];

                char* p;
                p = names[j];
                names[j] = names[i];
                names[i] = p;

                i++;j--;
        }
    }

    quick_sort(names,heights,left,j);
    quick_sort(names,heights,i,right);

}

char ** sortPeople(char ** names, int namesSize, int* heights, int heightsSize, int* returnSize){
    quick_sort(names,heights,0,namesSize-1);
    *returnSize = namesSize;
    return names;
}