class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1){
            return 0;
        }
        set<char> ans;
        
        for(int i=0;i<s.size()-1;i++){
            bool flag=true;
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j] || ans.find(s[i])!=ans.end()){
                    flag=false;
                    ans.insert(s[i]);
                    break;

                    
                }
            }
            
            if(flag==true){
                return i;
            }
        }
        
        if(ans.find(s[s.size()-1])==ans.end()){
            return s.size()-1;
        }
        return -1;
    }
};