class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser=0;
        vector<int> ans;
        for(int i=0;i<bank.size();i++){
            int cnt=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1'){
                    cnt++;
                    
                }
            }
            if(cnt!=0){
                ans.push_back(cnt);
            }
        }
        
        if(ans.size()==1) return 0;
        
        for(int i=1;i<ans.size();i++){
            laser+=ans[i]*ans[i-1];
            
        }
        return laser;
        
    }
};