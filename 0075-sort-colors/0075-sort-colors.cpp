class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        int i=0;
        for(auto it:mp){
            while(it.second-->0){
                nums[i++]=it.first;
            }
        }
    }
};