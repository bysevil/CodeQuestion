/*https://leetcode.cn/problems/nGK0Fy/description/*/
int calculate(char* s){
    int x = 1, y = 0;
    while(*s){
        if(*s == 'A') x = 2 * x + y;
        else y = 2 * y + x;
        s++;
    }
    return x + y;
}