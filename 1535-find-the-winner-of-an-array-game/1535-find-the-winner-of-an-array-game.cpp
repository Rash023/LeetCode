class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        int n=arr.size();
        
        int currMax=arr[0];
        
        for(int i=1;i<n;i++){
            currMax=max(currMax,arr[i]);
            mp[currMax]++;
            if(mp[currMax]>=k){
                return currMax;
                
            }
        }
        
        return currMax;
    }
};