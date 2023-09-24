class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
           
            
        }
        
        for(int j=0;j<s.size();j++){
            if(map[s[j]]==1) return j;
        }
        return -1;
    }
};