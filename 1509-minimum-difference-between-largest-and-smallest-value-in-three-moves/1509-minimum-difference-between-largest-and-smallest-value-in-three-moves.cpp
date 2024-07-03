class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        sort(begin(nums),end(nums));
        int mini=INT_MAX;
        for(int l=0,r=nums.size()-4;l<4;l++,r++){
            mini=min(mini,nums[r]-nums[l]);
        }
        return mini;
    }
};