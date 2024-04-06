class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            
            
        }
        
        while(true){
            if(mp.find(original)==mp.end()){
                return original;
                
            }
            
            else{
                mp[original]--;
                original*=2;
                if(mp[original]==0){
                    mp.erase(original);
                    
                }
                
                
            }
        }
        
        return -1;
        
    }
};