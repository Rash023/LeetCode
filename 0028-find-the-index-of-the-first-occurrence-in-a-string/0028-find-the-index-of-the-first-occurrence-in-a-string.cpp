class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i=0;i<haystack.size();i++){
            int count=0;
            int j=i;
            for(int k=0;k<needle.size();k++){
                if(haystack[j]!=needle[k]){
                    break;
                }
                else{
                    j++;
                    count++;
                }
            }
            if(count==needle.size()){
                return i;
            }
        }
        
        return -1;
    }
};