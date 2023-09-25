class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<s.size();i++){
            t[i+1]+=t[i]-s[i]; //passing the diff to the next ele
        }
        
        return t[t.size()-1]; //eventually the diff will be stored in the last ele
    }
};