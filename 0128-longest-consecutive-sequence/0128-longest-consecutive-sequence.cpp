class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        
        sort(nums.begin(),nums.end());
        int fcount=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                    count++;
                }
                else{
                    fcount=max(fcount,count);
                    count=1;
                }
            }
        }
        return max(fcount,count);
    }
};