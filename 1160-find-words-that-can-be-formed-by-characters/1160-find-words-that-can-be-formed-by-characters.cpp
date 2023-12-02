class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp1;
        int ans=0;
        for(int i=0;i<chars.size();i++){
            mp1[chars[i]]++;
        }
        
        for(int i=0;i<words.size();i++){
            unordered_map<char,int> mp2;
            int j=words[i].size()-1;
            int count=0;
            while(j>=0){
                
                char ch=words[i][j];
                
                mp2[ch]++;
                
                if(mp1.find(ch)!=mp1.end() && mp2[ch]<=mp1[ch]){
                    count++;
                }
                else{
                    break;
                }
                j--;
            }
            if(count==words[i].size()){
                ans+=count;
            }
        }
        
        return ans;
    }
};