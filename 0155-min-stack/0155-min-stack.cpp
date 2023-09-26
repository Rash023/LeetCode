class MinStack {
public:
    vector<pair<int,int>> ans;
    MinStack() {
        
    }
    
    void push(int val) {
        if(ans.empty()){
            pair<int,int> p=make_pair(val,val);
            ans.push_back(p);
        }
        else{
            pair<int,int> p;
            p.first=val;
            p.second=min(val,ans.back().second);
            ans.push_back(p);
        }
    }
    
    void pop() {
        ans.pop_back();
    }
    
    int top() {
       return ans.back().first;
    }
    
    int getMin() {
        return ans.back().second;
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