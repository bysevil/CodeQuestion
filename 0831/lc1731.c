#include<limits.h>
//https://leetcode.cn/problems/minimum-degree-of-a-connected-trio-in-a-graph/description/

int minTrioDegree(int n,int** edges, int edgesSize, int* edgesColSize){
    int hashtabs[n][n], num[n];
    memset(hashtabs,0,sizeof(hashtabs));
    memset(num,0,sizeof(num));
    for(int i = 0; i < edgesSize; i++){
        int x = edges[i][0] - 1, y = edges[i][1] - 1;
        hashtabs[x][y] = hashtabs[y][x] = 1;
        num[x]++;num[y]++;
    }

    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(hashtabs[i][j]){
                for(int k = j + 1; k < n; k++){
                    if(hashtabs[j][k] && hashtabs[i][k]){
                        ans = fmin(ans, num[i] + num[j] + num[k] - 6);
                    }
                }
            }
        }
    }
    return ans == INT_MAX ? -1 : ans;
}
