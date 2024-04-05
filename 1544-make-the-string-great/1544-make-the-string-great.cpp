class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(st.empty()){
                st.push(ch);
            }
            else if(ch-'A'==st.top()-'a'){
                st.pop();
                
            }
            else if(ch-'a'==st.top()-'A'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        
        if(st.empty()) return "";
        
        string ans="";
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            
        }
        reverse(begin(ans),end(ans));
        return ans;
        
    }
};