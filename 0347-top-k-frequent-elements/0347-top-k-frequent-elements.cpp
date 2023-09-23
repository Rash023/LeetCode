class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        
        
        vector<vector<int>> bucket(nums.size()+1);
        
        for(auto it: ans){
            bucket[it.second].push_back(it.first);
        }
        
        vector<int> fans;
        for(int j=bucket.size()-1;j>0 && fans.size()<k;j--){
            for(auto num: bucket[j]){
                fans.push_back(num);
                if(fans.size()==k){
                    break;
                }
            }
        }
        
        return fans;
        
    }
};