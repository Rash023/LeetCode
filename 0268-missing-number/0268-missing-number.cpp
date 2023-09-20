class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(1+n)/2;
        int fsum=0;
        for(int i=0;i<n;i++){
            fsum+=nums[i];
        }
        return sum-fsum;
    }
};