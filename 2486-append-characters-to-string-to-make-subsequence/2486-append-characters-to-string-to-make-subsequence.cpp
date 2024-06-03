class Solution {
public:
    int appendCharacters(string s, string t) {
        int idx=0;
        int n=t.size();
        
        for(int i=0;i<s.size();i++){
            if(idx==t.size()) return 0;
            if(s[i]==t[idx]){
                
                
                idx++;
                
            }
            
        }
        
        return n-idx;
        
    }
};