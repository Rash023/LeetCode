class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int idx=0;
        
        
        for(int i=0;i<pushed.size() && idx<popped.size();i++){
            st.push(pushed[i]);
            
            while(!st.empty() && idx<popped.size() && st.top()==popped[idx]){
                st.pop();
                idx++;
                
            }
            
        }
        
        return idx==popped.size();
        
    }
};