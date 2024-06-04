class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            
        }
        
        if(mp.size()==1) return s.size();
        
        int oddPairs=0;
        
        for(auto it:mp){
            if(it.second%2!=0){
                oddPairs++;
                
            }
        }
        
        int maxLen=0;
        
        if(oddPairs>0){
            maxLen=n-oddPairs+1;
            return maxLen;
            
        }
        
        return n;
        
    }
};