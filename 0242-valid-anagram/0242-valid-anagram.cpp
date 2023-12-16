class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ans;
        
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
            
        }
        
        for(int j=0;j<t.size();j++){
            ans[t[j]]--;
        }
        
        for(auto it:ans){
            if(it.second<0 || it.second>0){
                return false;
            }
        }
        
        return true;
    }
};