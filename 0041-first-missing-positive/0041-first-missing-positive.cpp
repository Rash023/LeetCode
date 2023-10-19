class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>n){
                continue;
            }
            else{
                if(nums[nums[i]-1]!=nums[i]){
                    swap(nums[nums[i]-1],nums[i]);
                   --i; //cannot move forward without moving the swapped number to actual place
                }
                
                
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(i+1 !=nums[i]){
                return i+1;
            }
        }
        return n+1;
    }
};