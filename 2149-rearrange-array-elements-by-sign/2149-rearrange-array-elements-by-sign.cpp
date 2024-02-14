class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        
        int i=0;  //iteration for positive numbers
        int j=1;  //iteration for negative numbers
        
        for(int k=0;k<nums.size();k++){
            if(nums[k]>0 && i<nums.size()){
                res[i]=nums[k];
                i+=2;
                
            }
            else if(j<nums.size()){
                res[j]=nums[k];
                j+=2;
                
            }
        }
        
        return res;
        
    }
};