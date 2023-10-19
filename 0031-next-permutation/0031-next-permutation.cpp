class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2){
            return;
        }
        
        int index=nums.size()-1;
        while(index>0){
            if(nums[index-1]<nums[index]) break;
            index--;
        }
        if(index==0){
                reverse(nums.begin(),nums.end());
                return;
            }
        else{
            int val=nums[index-1];
            int j=nums.size()-1;
            while(j>=index){


                if(nums[j]>val){
                    break;
                }
                j--;
             }
             swap(nums[index-1],nums[j]);
            reverse(nums.begin()+index,nums.end());
            return;
        }
        
        
        
       
    
    }
};