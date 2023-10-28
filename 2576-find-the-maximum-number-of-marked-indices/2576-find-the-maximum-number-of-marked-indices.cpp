class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int maxIndex=0;
        int n=nums.size();
        
        int i=0;
        int j=n/2;
        while(j<n && i<n/2){
            if(2*nums[i]<=nums[j]){
                maxIndex+=2;
                j++;
                i++;
            }
            else if(2*nums[i]>=nums[j]){
                j++;
            }
            
            
        }
        
        return maxIndex;
    }
};