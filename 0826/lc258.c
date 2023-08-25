// https://leetcode.cn/problems/add-digits/
int addDigits(int num){
    int tmp = 0;
    while(num >= 10){
        tmp = 0;
        while(num){
            tmp += num % 10;
            num /= 10;
        }
        num = tmp;
    }
    return num;
}

//找规律
int addDigits(int num){
    return (num - 1) % 9 + 1;
}