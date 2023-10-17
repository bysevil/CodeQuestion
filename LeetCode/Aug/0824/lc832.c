/*https://leetcode.cn/problems/flipping-an-image/description/*/
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes){
    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    for(int i = 0; i < imageSize; i++){
        int left = 0,right = imageSize-1;
        while(left < right){
            if(image[i][left] == image[i][right]){
                image[i][left] = !image[i][left];
                image[i][right] = !image[i][right];
            } 
            left++;right--;
        }
        if(left == right) image[i][left] = !image[i][left];
    }
    return image;
}