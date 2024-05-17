class Solution {
public:
    vector<string> ans;
    
    bool isValid(string temp){
        int cnt=0;
        for(int i=0;i<temp.size();i++){
           if(temp[i]=='('){
               cnt++;
               
           }
           else{
               cnt--;
           }
           
           if(cnt<0) return false;
           
       }
        return cnt==0;
        
    }
    void solve(int n,string &temp){
        if(temp.size()==2*n){
            if(isValid(temp)){
                ans.push_back(temp);
                
            }
            
            return;
        }
        
        
        temp.push_back('(');
        solve(n,temp);
        temp.pop_back();
        temp.push_back(')');
        solve(n,temp);
        temp.pop_back();
        
        
    }
    vector<string> generateParenthesis(int n) {
        string temp="";
        solve(n,temp);
        
        return ans;
        
        
        
    }
};