class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(auto x:nums){
            ans[x]++;
        }
        for(auto z:ans){
            if(z.second==1){
                return z.first;
            }
        }
        return -1;
    }
};