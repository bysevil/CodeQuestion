/*https://leetcode.cn/problems/hamming-distance/*/
int hammingDistance(int x, int y){
    x ^= y;
    y = 0;
    while(x){
        y++;
        x = x & (x - 1);
    }
    return y;
}