class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool isTmapped[256] = {0};

        for(int i = 0; i < s.size(); i++) {
            if(hash[s[i]] == 0 && isTmapped[t[i]]==0) {
                hash[s[i]] = t[i];
                isTmapped[t[i]] = true;
            }
        }
        for(int i = 0; i < t.size(); i++) {
            if(char(hash[s[i]]) != t[i]) {
                return false;
            } 
        }
        return true;
    }
};