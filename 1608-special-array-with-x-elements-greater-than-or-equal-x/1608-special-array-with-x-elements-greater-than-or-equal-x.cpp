class Solution {
public:
    int findFirst(vector<int> &nums,int val){
        int s=0;
        int e=nums.size()-1;
        int index=nums.size();
        
        while(s<=e){
            int mid=s+(e-s)/2;
            
            if(nums[mid]>=val){
                index=mid;
                e=mid-1;
                
            }
            else{
                s=mid+1;
                
            }
            
        }
        
        return index;
        
    }
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        
        sort(begin(nums),end(nums));
        for(int i=1;i<=nums.size();i++){
            int k=findFirst(nums,i);
            
            if(n-k==i){
                return i;
                
            }
            
        }
        
        return -1;
        
    }
};