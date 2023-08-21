/*https://leetcode.cn/problems/guess-numbers/*/
int game(int* guess, int guessSize, int* answer, int answerSize){
    int num = 0;
    for(int i = 0; i < 3; i++){
        if(*guess++ == *answer++) num++;
    }
    return num;
}