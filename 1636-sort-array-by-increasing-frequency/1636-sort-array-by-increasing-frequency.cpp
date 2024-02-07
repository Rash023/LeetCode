class Solution {
public:
    static bool SortByFreq(const pair<char, int>& a, const pair<char, int>& b){
        return a.second == b.second? a.first>b.first: a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            
        }
        
        vector<pair<int,int>> v(mp.begin(),mp.end());
        
        sort(begin(v),end(v),SortByFreq);

        vector<int> res;
        
        for(int i=0;i<v.size();i++){
            while(v[i].second!=0){
                res.push_back(v[i].first);
                v[i].second--;
            }
        }
        
        return res;
        
    }
};