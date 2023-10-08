class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int right=0;
        int left=0;

        string ans="";
        bool flag=true;
        while(right<word1.size() && left<word2.size()){
            if(flag){
                ans+=word1[left++];
                flag=false;
            }
            else{
                ans+=word2[right++];
                flag=true;
            }
        }
        
        while(right<word2.size()){
            ans+=word2[right++];
        }
        
        while(left<word1.size()){
            ans+=word1[left++];
        }
        
        return ans;
    }
};