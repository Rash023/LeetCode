class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,pair<int,bool>> mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]].first++;
            
        }
        
        string ans="";
        for(int i=0;i<order.size();i++){
            char ch=order[i];
            if(mp.find(ch)!=mp.end()){
                for(int i=0;i<mp[ch].first;i++){
                    ans+=ch;
                    
                }
                mp[ch].second=true;
            }
        }
        
        for(auto it:mp){
            if(it.second.second==false){
                for(int i=0;i<it.second.first;i++){
                     ans+=it.first;
                }
               
                
            }
        }
        
        return ans;
        
    }
};