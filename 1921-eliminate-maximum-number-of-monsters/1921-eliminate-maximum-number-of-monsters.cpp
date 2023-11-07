class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int cnt=0;
        
       vector<int> time;
        for(int i=0;i<dist.size();i++){
            time.push_back(ceil((float)dist[i]/speed[i]));
            
        }
        
        
        sort(begin(time),end(time));
        
        int t=0;
        
        for(int i=0;i<time.size();i++){
            if(time[i]-t<=0){
                return cnt;
            }
            
            cnt++;
            t++;
        }
        
        return cnt;
    }
};