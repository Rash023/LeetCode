class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> rightMax(height.size());
        vector<int> leftMax(height.size());
        
        int maxi=height[0];
        for(int i=0;i<height.size();i++){
            maxi=max(maxi,height[i]);
            leftMax[i]=maxi;
            
            
        }
        
        maxi=height[height.size()-1];
        
        for(int i=height.size()-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            rightMax[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<height.size();i++){
            ans+=min(rightMax[i],leftMax[i])-height[i];
        }
        
        return ans;
        
    }
};