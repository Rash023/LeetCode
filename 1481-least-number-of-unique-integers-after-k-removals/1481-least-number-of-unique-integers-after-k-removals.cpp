class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            
        }
        
        vector<int> counts;
        
        for(auto it:mp){
            counts.push_back(it.second);
            
        }
        
        sort(begin(counts),end(counts));
        
        
        int UniqueNum=counts.size();
        int idx=0;
        
        
        while(k>0 && idx<counts.size()){
            if(k>=counts[idx]){
                k-=counts[idx];
                UniqueNum--;
                
            }
            else{
                break;
            }
            idx++;
            
        }
        
        return UniqueNum;
    }
};