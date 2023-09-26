class Solution {
private:
    int pop(stack<char> &st){
        const char c=st.top();
        st.pop();
        return c;
    }
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==1){
            return false;
        }
        
        for(const char c:s){
            if(c=='('){
                st.push(')');
            }
            else if(c=='{'){
                st.push('}');
                
            }
            else if(c=='['){
                st.push(']');
            }
            else if(st.empty() || pop(st)!=c){
                
                return false;
            }
            
            
        }
        return st.empty();
        
    }
};