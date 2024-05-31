class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long total=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total^=nums[i];
            
        }
        
        int mask=total&(-total);
        
        
        int g1=0;
        int g2=0;
        
        for(auto num:nums){
            if(num&mask){
                g1^=num;
                
            }
            else{
                g2^=num;
                
            }
        }
        
        return {g1,g2};
        
        
    }
};