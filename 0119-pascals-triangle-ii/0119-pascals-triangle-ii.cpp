class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        
              long long c=1;
            for(int j=1;j<=rowIndex+1;j++){
                ans.push_back(c);
                c=c*(rowIndex+1-j)/j;
            }
            return ans;
            
            

    }
};