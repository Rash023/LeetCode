class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        
        if(t.size()>n){
            return "";
            
        }
        
        unordered_map<char,int> mp;
        int cnt=t.size();
        for(char &it:t){
            mp[it]++;
         
        }
        
        
        int i=0,j=0;
        int minWindow=INT_MAX;

        int start=0;
        while(j<n){
            
            if(mp[s[j]]>0){
                cnt--;
                    
            }
                
            mp[s[j]]--;
                
                
                
            
            while(cnt==0){
              
                if(j-i+1<minWindow){
                    start=i;
                    minWindow=j-i+1;
                    
                }
                //removing elements from the window
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    cnt++;
                }
                i++;
                
                
            }
            j++;
            
        }
        
        return minWindow==INT_MAX? "":s.substr(start,minWindow);
        
    
    }
};