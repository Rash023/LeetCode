class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int max_freq=0;
        int cnt=0;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            max_freq=max(max_freq,mp[nums[i]]);
            
            
            
        }
        
        
        for(auto &it:mp){
            if(it.second==max_freq) cnt+=max_freq;
            
        }
        
        return cnt;
        
    }
};