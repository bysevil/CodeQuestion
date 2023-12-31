// https://leetcode.cn/problems/implement-queue-using-stacks/description/
typedef struct {
    Stack* Push;
    Stack* Pop;    
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* obj = malloc(sizeof(MyQueue));
    obj->Push = malloc(sizeof(Stack));
    obj->Pop = malloc(sizeof(Stack));
    StackInit(obj->Push);
    StackInit(obj->Pop);
    return obj;
}

void StackSwap(Stack* s1,Stack* s2){
    while(!StackEmpty(s2)){
        StackPush(s1,StackTop(s2));
        StackPop(s2);
    }
}

void myQueuePush(MyQueue* obj, int x) {
    StackSwap(obj->Push,obj->Pop);
    StackPush(obj->Push,x);
}

int myQueuePop(MyQueue* obj) {
    StackSwap(obj->Pop,obj->Push);
    int ans = StackTop(obj->Pop);
    StackPop(obj->Pop);
    return ans;
}

int myQueuePeek(MyQueue* obj) {
    StackSwap(obj->Pop,obj->Push);
    return StackTop(obj->Pop);
}

bool myQueueEmpty(MyQueue* obj) {
    return (StackEmpty(obj->Push) && StackEmpty(obj->Pop));
}

void myQueueFree(MyQueue* obj) {
    free(obj->Push);
    free(obj->Pop);
    free(obj);
}