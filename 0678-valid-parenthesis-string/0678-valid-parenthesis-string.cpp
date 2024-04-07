class Solution {
public:
    int t[101][101];
    bool solve(int idx,string &s,int cnt){
        if(t[idx][cnt]!=-1) return t[idx][cnt];
        
        if(idx==s.size()) return cnt==0;
        bool isValid=false;
        if(s[idx]=='('){
            isValid|=solve(idx+1,s,cnt+1);
            
        }
        else if(s[idx]==')'){
            if(cnt>0){
                isValid|=solve(idx+1,s,cnt-1);
                
            }
            
        }
        else{
            isValid|=solve(idx+1,s,cnt+1);
            if(cnt>0){
                isValid|=solve(idx+1,s,cnt-1);    
            }
            
            isValid|=solve(idx+1,s,cnt);
        }
        
        return t[idx][cnt]=isValid;
        
    }
    bool checkValidString(string s) {
        int n=s.size();
        memset(t,-1,sizeof(t));
        
        return solve(0,s,0);
        
    }
};