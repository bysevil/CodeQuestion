// https://leetcode.cn/problems/jewels-and-stones/description/

//搜索
int numJewelsInStones(char * jewels, char * stones){
    int ans = 0;
    while(*stones){
        if(strchr(jewels, *stones)) ans++;
        stones++;
    }
    return ans;
}

//哈希
int numJewelsInStones(char * jewels, char * stones){
    int ans = 0;
    int hashtabs[173] = { 0 };
    while(*jewels){
        hashtabs[*jewels] = 1;
        jewels++;
    }
    while(*stones){
        if(hashtabs[*stones]) ans++;
        stones++;
    }
    return ans;
}