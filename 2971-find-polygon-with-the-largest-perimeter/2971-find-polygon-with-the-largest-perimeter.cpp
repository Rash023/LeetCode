class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(begin(nums),end(nums));
        
        
        vector<long long> preSum;
        
        long long sum=0;
        
        
        //making prefix sum array
        for(auto n:nums){
            preSum.push_back(sum);
            sum+=n;
            
        }
        
        
        //iterating and checking if the value of preSum[i]<nums[i]
        
        for(int i=nums.size()-1;i>=2;--i){
            if(nums[i]<preSum[i]){
                return (preSum[i]+(long long)nums[i]);
                
            }
        }
        
        return -1;
        
    }
};