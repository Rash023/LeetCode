class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    
        vector<string> ans;
        int targetIndex=0;
        for(int i=1;i<=n;i++){
            if(target[targetIndex]==i){
                targetIndex++;
                ans.push_back("Push");
               
            }
            else if(target[targetIndex]!=i){
                ans.push_back("Push");
                ans.push_back("Pop");
                    
            }
            
            if(targetIndex>=target.size()){
                break;
            }
        }

        return ans;
        
    }
};