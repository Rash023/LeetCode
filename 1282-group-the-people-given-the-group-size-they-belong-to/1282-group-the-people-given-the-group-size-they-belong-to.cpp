class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        if(groupSizes.size()==1){
            ans.push_back({0});
            return ans;
        }
        for(int i=0;i<groupSizes.size();i++){
            vector<int> temp;
            temp.push_back(i);
            for(int j=i+1;j<groupSizes.size();j++){
                if(groupSizes[j]==groupSizes[i] && temp.size()<groupSizes[i]){
                    temp.push_back(j);
                    groupSizes[j]=-1;
                }
                
            }
            if(temp.size()==groupSizes[i]){
                ans.push_back(temp);
            }
        }
        return ans;
    }
};