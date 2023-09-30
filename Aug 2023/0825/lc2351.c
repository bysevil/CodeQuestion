// https://leetcode.cn/problems/first-letter-to-appear-twice/description/
char repeatedCharacter(char * s){
    char ans;

    int flag = 0;
    while(*s){
        if(flag & 1 << *s - 'a'){
            ans = *s;
            break;
        }else{
            flag += 1 << *s - 'a';
        }
        s++;
    }

    return ans;
}