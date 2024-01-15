class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost;
        
        for(int i=0;i<matches.size();i++){
            lost[matches[i][1]]++;
                    
        }
        
        vector<int> winner;
        vector<int> lostOnce;
        
        for(int i=0;i<matches.size();i++){
            if(lost.find(matches[i][0])==lost.end()){
                winner.push_back(matches[i][0]);
                lost[matches[i][0]]=2;
            }
            
            if(lost[matches[i][1]]==1){
                lostOnce.push_back(matches[i][1]);

            }
        }
        
        sort(begin(winner),end(winner));
        sort(begin(lostOnce),end(lostOnce));
        
        
        return {winner,lostOnce};
        
    }
};