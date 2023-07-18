class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        set<int> ans;
        
        int cur1 = 0, cur2 = 0;
        
        while(cur1 < nums1.size() && cur2 < nums2.size()){
            if(nums1[cur1] == nums2[cur2]){
                ans.insert(nums1[cur1]);
                cur1++;
                cur2++;
            }else if(nums1[cur1] < nums2[cur2]){
                cur1++;
            }else{
                cur2++;
            }
        }
        
        
        vector<int> fans;
        for(auto it:ans){
            fans.push_back(it);
        }
        return fans;
    }
};