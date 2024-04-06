class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i = 0;i<s.length();i++){
            char ch = s[i];
            if(ch == '('){
                st.push(i);
            }else if(ch == ')'){
                if(st.empty())s[i] = '#';
                else st.pop();
            }
        }
        while(!st.empty()){
            s[st.top()] = '#';
            st.pop();
        }
        s.erase(remove(s.begin(),s.end(),'#'),s.end());
        return s;
    }
};