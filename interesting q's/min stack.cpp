// https://leetcode.com/problems/min-stack/submissions/

class Node{
    public:
    int val;
    int min;
    Node* next;
    Node* prev;
    Node(){
        min = INT_MAX;
        next = NULL;
        prev = NULL;
    }
    Node(int v, int m, Node* p){
        val = v, min = m, next = NULL, prev = p;
    }
};
class MinStack {
public:
    Node *st;
    int size =0;
    MinStack() {
        st = new Node();
        size =0;
    }
    
    void push(int val) {
        int m = min (st->min, val);
        st->next = new Node(val, m, st);
        size++;
        st= st->next;
    }
    
    void pop() {
        if(size){
            st = st->prev;
            st->next = NULL;
            size--;
        }
    }
    
    int top() {
        return st->val;
    }
    
    int getMin() {
        return st->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */