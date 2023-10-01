/*https://leetcode.cn/problems/xor-operation-in-an-array/*/
int xorOperation(int n, int start){
    int num = 0;
    for(int i = 0; i < n; i++) num ^= start + 2 * i;
    return num;
}