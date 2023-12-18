class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        sort(begin(nums),end(nums));
        
        int maxProd=nums[nums.size()-1]*nums[nums.size()-2];
        int minProd=nums[0]*nums[1];
        
        return maxProd-minProd;
    }
};