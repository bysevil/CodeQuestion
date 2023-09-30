// https://leetcode.cn/problems/pascals-triangle/
int** generate(int numRows, int* returnSize, int** returnColumnSizes){

    *returnSize = numRows;
    
    int** ans = malloc(*returnSize * sizeof(int*));
    *returnColumnSizes = malloc(*returnSize * sizeof(int*));
    for(int i = 0; i < numRows; i++){
        ans[i] = calloc(i + 1, sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
    }

    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < i + 1; j++){
            if(j == 0) ans[i][j] = 1;
            else if(j == i) ans[i][j] = 1;
            else{
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    }

    return ans;
}