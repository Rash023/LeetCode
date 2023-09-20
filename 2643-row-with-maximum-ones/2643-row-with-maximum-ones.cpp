class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index=0;
        vector<int> ans;
        int fcount=0;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            
            if(count>fcount){
                fcount=count;
                index=i;
                
            }
        }
        ans.push_back(index);
        ans.push_back(fcount);
        return ans;
    }
};