class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            string ans=to_string(nums[i]);
            if(ans.size()%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};