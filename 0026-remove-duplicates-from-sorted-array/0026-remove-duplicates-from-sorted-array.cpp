class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int i=j+1;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]==nums[i]){
                i++;
            }
            else{
                nums[++j]=nums[i++];
               
            }
        }
        
        return j+1;
    }
};