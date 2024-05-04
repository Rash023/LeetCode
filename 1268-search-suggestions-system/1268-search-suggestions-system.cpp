class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(begin(products),end(products));
        
        vector<vector<string>> ans;
        
        int l=0,r=products.size()-1;
        
        
        for(int i=0;i<searchWord.size();i++){
            char ch=searchWord[i];
            
            while(l<=r && (products[l].size()<=i || products[l][i]!=ch)) l++;
            
            while(l<=r && (products[r].size()<=i || products[r][i]!=ch)) r--;
            
            int remain=r-l+1;
            vector<string> temp;
            for(int j=0;j<min(3,remain);j++){
                temp.push_back(products[l+j]);
                
                
            }
            
            ans.push_back(temp);
            
            
        }
        
        return ans;
        
        
        
    }
};