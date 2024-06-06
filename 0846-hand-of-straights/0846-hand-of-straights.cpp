class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        unordered_map<int,int> mp;
        
        if(n%groupSize!=0) return false;
        
        sort(begin(hand),end(hand));
        
        for(int i:hand){
            mp[i]++;    
        }
        
        int cnt=0;
        
      
        for(auto it:hand){
            int ele=0;
            for(int i=it;i<it+groupSize;i++){
                if(mp[i]==0) break;
                else{
                    mp[i]--;
                    ele++;
                }
                
            }
            if(ele==groupSize) cnt++;
            
        }
        return cnt==n/groupSize;
        
        
        
    }
};