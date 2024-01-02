class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        
        
        while(i<nums.size()){
            k-=nums[i++]? 0:1;
            
            if(k<0){
                k+=nums[j++]?0:1;
                
            }
            
        }
        
        return i-j;
    }
};