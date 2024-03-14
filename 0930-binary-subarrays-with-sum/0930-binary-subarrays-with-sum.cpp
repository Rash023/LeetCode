class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        
        int preSum=0;
        int cnt=0;
        
        
        for(auto num:nums){
            preSum+=num;
            
            if(preSum==goal) cnt++;
            if(mp.find(preSum-goal)!=mp.end()){
                cnt+=mp[preSum-goal];
            }
            mp[preSum]++;
            
            
        }
        
        return cnt;
        
    }
};