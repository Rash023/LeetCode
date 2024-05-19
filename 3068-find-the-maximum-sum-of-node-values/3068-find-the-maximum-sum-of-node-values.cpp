class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int cnt=0;
        long long sum=0;
        long long minVal=INT_MAX;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            long long temp=nums[i];
            minVal=min(abs(temp-(temp^k)),minVal);
            if((temp^k)>temp){
                cnt++;
                sum+=(temp^k);
            }
            else{
                sum+=temp;
                
            }
        }
        
        if(cnt%2==0) return sum;
        return sum-minVal;
        
        
    }
};