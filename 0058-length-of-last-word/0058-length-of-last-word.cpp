class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==1){
            return 1;
        }

        int count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(isspace(s[i]) && count>0){
                return count;
            }
            else if(!isspace(s[i])){
                count++;
            }
            
        }
        return count;
    }
};