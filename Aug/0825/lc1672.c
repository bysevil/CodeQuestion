// https://leetcode.cn/problems/richest-customer-wealth/description/
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int ans = 0;
    for(int i = 0; i < accountsSize; i++){
        int max = 0;
        for(int j = 0; j < accountsColSize[i]; j++){
            max += accounts[i][j];
        }
        if(max > ans) ans = max;
    }
    return ans;
}