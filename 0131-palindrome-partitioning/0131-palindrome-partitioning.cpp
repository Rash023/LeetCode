class Solution {
public:
    int n;
    vector<vector<string>> ans;
    bool check(int start,int end,string s){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
                
            }
            start++;
            end--;
            
        }
        
        return true;
        
    }
    void solve(int idx,vector<string> &temp,string &s){
        if(idx==n){
            ans.push_back(temp);
            
            return;
            
        }
        
        
        for(int i=idx;i<n;i++){
            if(check(idx,i,s)){
                temp.push_back(s.substr(idx,i-idx+1));
                solve(i+1,temp,s);
                temp.pop_back();
                
            }
            
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        n=s.size();
        
        solve(0,temp,s);
        return ans;
        
        
    }
};