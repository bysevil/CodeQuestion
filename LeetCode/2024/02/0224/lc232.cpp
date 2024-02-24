// https://leetcode.cn/problems/implement-queue-using-stacks/

class MyQueue {
    stack<int> sPush;
    stack<int> sPop;
public:    
    void push(int x) {
        sPush.push(x);
    }
    
    int pop() {
        int ans = peek();
        sPop.pop();
        return ans;
    }
    
    int peek() {
        if(sPop.empty()){
            while(!sPush.empty()){
            int tmp = sPush.top();
            sPop.push(tmp);
            sPush.pop();
            }
        }
        return sPop.top();
    }
    
    bool empty() {
        return sPush.empty() && sPop.empty();
    }
};