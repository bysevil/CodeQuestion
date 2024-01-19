//https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1?tpId=13&tqId=11200&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
class Sum{
public:
    Sum(){
        num++;
        sum += num;
    }
    static int num;
    static int sum;
};

int Sum::sum = 0;
int Sum::num = 0;

class Solution {
public:
    int Sum_Solution(int n) {
        Sum obj[n];
        return Sum::sum;
    }
};