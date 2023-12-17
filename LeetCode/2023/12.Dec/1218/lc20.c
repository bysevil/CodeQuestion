// https://leetcode.cn/problems/valid-parentheses/description/
typedef struct Node{
    char ch;
    struct Node* prev;
}Node;

void StackPop(Node** tail){
    Node* tmp = *tail;
    *tail = (*tail)->prev;
    free(tmp);
}

void StackPush(Node** tail,char ch){
    Node* NewNode = malloc(sizeof(Node));
    NewNode->ch = ch;
    NewNode->prev = *tail;
    *tail = NewNode;
}
bool isValid(char* s) {
    Node head;
    Node* tail = &head;

    char* cur = s;
    while(*cur != '\0'){
        if(*cur == '(' || *cur == '{' || *cur == '['){
            StackPush(&tail,*cur);
            cur++;
        }else{
            switch(*cur){
            case ']':
                if(tail->ch == '['){
                    StackPop(&tail);
                    cur++;
                }else{
                    return false;
                }
                break;
            case '}':
                if(tail->ch == '{'){
                    StackPop(&tail);
                    cur++;
                }else{
                    return false;
                }
                break;
            case ')':
                if(tail->ch == '('){
                    StackPop(&tail);
                    cur++;
                }else{
                    return false;
                }
                break;
            }
        }
    }
    if(tail == &head)
        return true;
    else
        return false;
}