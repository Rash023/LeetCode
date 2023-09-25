class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size()==0){
            return t[0];
        }
        string ans;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            ans+=t[i];
            for(int j=0;j<ans.size();j++){
                if(ans[j]!=s[j] || j>s.size()){
                    return ans[j];
                }
            }
        }
        return t[t.size()-1];
    }
};