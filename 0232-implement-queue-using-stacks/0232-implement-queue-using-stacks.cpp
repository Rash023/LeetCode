class MyQueue {
public:
    stack<int> st;
    
    void pushHelper(int x){
        if(st.size()==0){
            st.push(x);
            return;
        }
        
        int data=st.top();
        st.pop();
        pushHelper(x);
        st.push(data);
        
        return;
    }
    void push(int x) {
        pushHelper(x);
        
    }
    
    int pop() {
        int data=st.top();
        st.pop();
        
        return data;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        if(st.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */