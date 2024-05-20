class Solution {
public:
    vector<string> ans;
    vector<string> buildArray(vector<int>& target, int n) {
       
        int idx=0;
        
        for(int i=1;i<=n;i++){
            if(idx==target.size()) break;
            if(i==target[idx]){
                ans.push_back("Push");
                idx++;
                
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            
        }
        
        return ans;
        
        
        
    }
};