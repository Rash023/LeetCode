class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int minsum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[k]+nums[j];
                if(sum==target){
                    return sum;
                }
                if(abs(sum-target)<abs(minsum-target)){
                    minsum=sum;
                }
                if(sum<target){
                    j++;

                }
                else{
                    k--;
                }
            }
        }
        return minsum;
    }
};