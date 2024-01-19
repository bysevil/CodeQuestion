// https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=6&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
class Solution {
public:
    int StrToInt(string str) {
        int i = 0,num = 0;
        if(str[0] == '+' || str[0] == '-') i++;
        
        for(; i < str.size(); i++){
            if(str[i] <= '9' && str[i] >= '0'){
                num *= 10;
                num += str[i] - '0';
            }else{
                return 0;
            }
        }

        if(str[0] == '-') return -num;

        return num;
    }
};