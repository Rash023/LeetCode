class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> p;
        for(int i=0;i<magazine.size();i++){
            p[magazine[i]]++;
        }
        
        for(int i=0;i<ransomNote.size();i++){
            p[ransomNote[i]]--;
            if(p[ransomNote[i]]<0){
                return false;
            }
            
        }

        
        
        return true;
        
    }
};