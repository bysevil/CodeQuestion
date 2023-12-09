// https://leetcode.cn/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof/description/
class Solution {
public:
    vector<int> sockCollocation(vector<int>& sockets) {
        size_t num = 0;
        for(int e : sockets){
            num ^= e;
        }
        num = num & -num;
        vector<int> ans = {0,0};
        for(int e : sockets){
            if(num & e){
                ans[0] ^= e;
            }else{
                ans[1] ^= e;
            }
        }
        return ans;
    }
};