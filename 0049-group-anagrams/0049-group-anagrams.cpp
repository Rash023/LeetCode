class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        if(strs.size()==0){
            return {{}};
        }
        
        for(int i=0;i<strs.size();i++){
            string ele=strs[i];
            sort(strs[i].begin(),strs[i].end());
            ans[strs[i]].push_back(ele);
            
            
        }
        
        vector<vector<string>> fans;
        for(auto it:ans){
            fans.push_back(it.second);
        }
        
        return fans;
    }
};