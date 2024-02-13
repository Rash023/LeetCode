class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            reverse(begin(temp),end(temp));
            if(temp==words[i]){
                return words[i];
            }
        }
        
        return "";
    }
};