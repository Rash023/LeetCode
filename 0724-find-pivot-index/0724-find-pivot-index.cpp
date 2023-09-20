class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       vector<int> right(nums.size(),0);
        vector<int> left(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]+nums[i-1];
            
        }
        
        for(int j=nums.size()-2;j>=0;--j){
            right[j]=right[j+1]+nums[j+1];
            
        }
        
        for(int i=0;i<nums.size();++i){
            if(left[i]==right[i]) return i;
        }
        
        return -1;
    }
};