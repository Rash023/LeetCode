class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int mini=INT_MAX;
        
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
            
        }
        
        for(int j=0;j<nums2.size();j++){
            int n=nums2[j];
            if(n<mini && mp.find(n)!=mp.end()){
                mini=n;
                
            }
        }
        
        return mini==INT_MAX?-1:mini;
        
        
    }
};