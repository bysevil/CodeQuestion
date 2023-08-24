/*https://leetcode.cn/problems/final-value-of-variable-after-performing-operations/description/*/
int finalValueAfterOperations(char ** operations, int operationsSize){
    int x = 0;
    for(int i = 0; i < operationsSize; i++){
        if(operations[i][0] == '+' || operations[i][2] == '+') x++;
        if(operations[i][0] == '-' || operations[i][2] == '-') x--;
    }
    return x;
}