class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        map<long,int> mp[n];
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                long diff=(long)nums[i]-nums[j];
                
                auto it=mp[j].find(diff);
                
                int count=it==mp[j].end()? 0:it->second;
                
                mp[i][diff]+=count+1;
                
                result+=count;
            }
        }
        
        return result;
    }
};