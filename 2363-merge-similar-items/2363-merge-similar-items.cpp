class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> ans;
        
        for(int i=0;i<items1.size();i++){
            ans[items1[i][0]]+=items1[i][1];
        }
        
        for(int j=0;j<items2.size();j++){
            ans[items2[j][0]]+=items2[j][1];
        }
        
        vector<vector<int>> fans;
        
        for(auto it:ans){
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            fans.push_back(temp);
        }
        return fans;
    }
};