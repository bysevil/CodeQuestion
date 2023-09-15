/*https://leetcode.cn/problems/maximum-number-of-words-found-in-sentences/description/*/
int mostWordsFound(char ** sentences, int sentencesSize){

    int max = 0;

    for(int i = 0; i < sentencesSize; i++){

        int j = 0,num = 0;

        while(sentences[i][j]){
            if(sentences[i][j++] == ' ') num++;
        }

        if(num > max) max = num;
    }

    return max + 1;
}