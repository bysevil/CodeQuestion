// https://leetcode.cn/problems/largest-local-values-in-a-matrix/
int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes){

    int** ans = malloc((gridSize - 2) * sizeof(int*));
    for(int i = 0; i < gridSize - 2; i++){
        ans[i] = malloc((gridColSize[i] - 2) * sizeof(int));
    }

    *returnColumnSizes = malloc((gridSize-2) * sizeof(int));

    for(int i = 0; i < gridSize - 2; i++){
        for(int j = 0; j < gridSize - 2; j++){

            int max = 0;
            for(int a = 0; a < 3; a++){
                for(int b = 0; b < 3; b++){
                    if(grid[i+a][j+b] > max) max = grid[i+a][j+b];
                }
            }

            ans[i][j] = max;
        }

        (*returnColumnSizes)[i] = gridColSize[i] - 2;
    }

    *returnSize = gridSize - 2;
    return ans;
}