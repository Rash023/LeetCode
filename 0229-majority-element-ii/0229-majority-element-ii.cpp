class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> map;
        
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        
        vector<int> ans;
        
        for(auto s:map){
            if(s.second>nums.size()/3){
                ans.push_back(s.first);
            }
        }
        return ans;
    }
};