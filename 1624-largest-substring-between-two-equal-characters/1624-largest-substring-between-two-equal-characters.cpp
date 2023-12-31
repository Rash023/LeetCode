class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLen=INT_MIN;
        
        for(int i=0;i<s.size();i++){
            int cnt=0;
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    maxLen=max(cnt,maxLen);
                    
                }
                
                cnt++;
            }
        }
        
        return maxLen==INT_MIN? -1:maxLen;
    }
};