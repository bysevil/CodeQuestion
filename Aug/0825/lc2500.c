// https://leetcode.cn/problems/delete-greatest-value-in-each-row/description/
int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int deleteGreatestValue(int** grid, int gridSize, int* gridColSize){
    
    for(int i = 0; i < gridSize; i++){
        qsort(grid[i],gridColSize[i],sizeof(int),cmp);
    }

    int ans = 0;
    
    for(int i = 0; i < *gridColSize; i++){
        int max = 0;
        for(int j = 0; j < gridSize; j++){
            if(grid[j][i] > max) max = grid[j][i];
        }
        ans += max;
    }
    return ans;
}