//https://leetcode.cn/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int> s;
        for(string e: tokens){
            if(e == "+" || e == "-" || e == "*" || e == "/"){
                int right = s.top();
                s.pop();
                int left = s.top();
                s.pop();
                switch(e[0]){
                    case '+':
                        s.push(right+left);
                        break;
                    case '-':
                        s.push(left-right);
                        break;
                    case '*':
                        s.push(right*left);
                        break;
                    case '/':
                        s.push(left/right);
                        break;
                }
            }
            else{
                s.push(stoi(e));
            }
        }
        return s.top();
    }
};