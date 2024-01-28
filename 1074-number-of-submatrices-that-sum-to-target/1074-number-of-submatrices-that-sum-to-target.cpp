class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int k) {
        //converting the 2d array into prefix Sum 2d array
        
        for(int i=0;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        
        int res=0;
        for(int startCol=0;startCol<matrix[0].size();startCol++){
            for(int j=startCol;j<matrix[0].size();j++){
                unordered_map<int,int> mp;
                
                mp.insert({0,1});
                
                int cumSum=0;
                
                for(int row=0;row<matrix.size();row++){
                    cumSum+=matrix[row][j]-(startCol>0? matrix[row][startCol-1]:0);
                    
                    if(mp.find(cumSum-k)!=mp.end()){
                        res+=mp[cumSum-k];
                    }
                    
                    mp[cumSum]++;
                }
            }
            
            
        }
        
        return res;
    }
};