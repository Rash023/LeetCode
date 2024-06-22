class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int oddCount=0;
        int res=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]&1) oddCount++;
            if(oddCount==k){
                res+=mp[0];
            }
            else if(oddCount>k){
                int diff=oddCount-k;
                res+=mp[diff];
            }
            mp[oddCount]++;
        }
        return res;
    }
};