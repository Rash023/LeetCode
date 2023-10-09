class Solution {
private:
    int firstocc(vector<int> nums,int target){
        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)>>1;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
            mid=(s+e)>>1;
        }
        
        return ans;
    }
    
    int lastocc(vector<int> nums,int target){
        int s=0;
        int e=nums.size()-1;
        int mid=(s+e)>>1;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
            mid=(s+e)>>1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int num1=firstocc(nums,target);
        int num2=lastocc(nums,target);
        
        ans.push_back(num1);
        ans.push_back(num2);
        
        return ans;
    }
};