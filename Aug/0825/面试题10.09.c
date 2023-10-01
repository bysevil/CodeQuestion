#include<stdbool.h>
// https://leetcode.cn/problems/sorted-matrix-search-lcci/description/
bool searchMatrix(int** matrix, int matrixSize, int matrixColSize, int target){
    int i = 0, j = matrixColSize - 1;
    while(i < matrixSize && j >= 0){
        if(matrix[i][j] < target) i++;
        else if(matrix[i][j] > target) j--;
        else return true;
    }
    return false;
}