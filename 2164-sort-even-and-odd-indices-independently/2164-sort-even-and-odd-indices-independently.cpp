class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> odd;
        vector<int> even;
        
        for(int i=0;i<nums.size();i++){
            
            if(i&1){
                odd.push_back(nums[i]);
                
            }
            else{
                even.push_back(nums[i]);
            }
            
            
        }
        
        sort(begin(odd),end(odd),greater<int>());
        sort(begin(even),end(even));
       
        
        
        int i=0;
        int j=0;
        
        for(int k=0;k<nums.size();k++){
            if(k&1){
                nums[k]=odd[j++];
                
            }
            else{
                nums[k]=even[i++];
                
            }
        }
        
        return nums;
        
    }
};