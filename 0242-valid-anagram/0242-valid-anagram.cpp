class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans(26,0);
        
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
            
        }
        
        for(int j=0;j<t.size();j++){
            ans[t[j]-'a']--;
        }
        
        sort(begin(ans),end(ans));
        
        if(ans[0]<0 || ans[ans.size()-1]>0){
            return false;
        }
        
        return true;
    }
};