class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time=0;
        
        int g_idx=0;
        int m_idx=0;
        int p_idx=0;
        
        
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M'){
                    time++;
                    m_idx=i;
                }
                else if(garbage[i][j]=='P'){
                    p_idx=i;
                    time++;
                }
                else{
                    g_idx=i;
                    time++;
                }
            }
        }
        
        //coverting the travel array into prefix sum array
        for(int i=1;i<travel.size();i++){
            travel[i]+=travel[i-1];
        }
        
        time+= m_idx>0? travel[m_idx-1]:0;
        time+= g_idx>0? travel[g_idx-1]:0;
        time+= p_idx>0? travel[p_idx-1]:0;
        
        
        return time;
    }
};