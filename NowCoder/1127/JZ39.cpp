// https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=13&&tqId=11181&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int>& numbers) {
        int ans = numbers[0],num = 0;
        for(auto e : numbers){
            if(ans == e) num++;
            else{
                num--;
                if(num == 0){
                    ans = e;
                    num++;
                }
            }
        }
        return ans;
    }
};