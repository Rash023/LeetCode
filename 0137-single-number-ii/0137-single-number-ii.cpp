class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        
        
        for(int bit=0;bit<32;bit++){
            int countOnes=0;
            int temp=(1<<bit);
            for(int num:nums){
                if(num&temp){
                    countOnes++;
                    
                }
            }
            
            if(countOnes%3){
                ans|=temp;
                
            }
        }
        
        return ans;
        
    }
};