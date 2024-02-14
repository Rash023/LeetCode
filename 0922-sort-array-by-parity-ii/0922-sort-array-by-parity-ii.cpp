class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        
        int i=0;  //iteration for even numbers
        int j=1;  //iteration for odd numbers
        
        
        for(int k=0;k<nums.size();k++){
            if(nums[k]&1 && j<nums.size()){
                res[j]=nums[k];
                j+=2;
                
            }
            else if(i<nums.size()){
                
                res[i]=nums[k];
                i+=2;
                
            }
        }
        
        return res;
        
    }
};