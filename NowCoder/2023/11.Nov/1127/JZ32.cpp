//https://www.nowcoder.com/practice/459bd355da1549fa8a49e350bf3df484?tpId=13&tqId=11183&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tPage=2
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int>& array) {
        int sum = 0,max = array[0];
        for(int n : array){
            sum += n;
            if(sum > max) max = sum;
            if( sum < 0) sum = 0;
        }
        return max;
    }
};