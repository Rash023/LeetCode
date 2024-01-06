class Solution {
public:
    int n;
    int memo[50001];
    int findNextJob(vector<vector<int>> &array,int l,int currentJobEnd){
        int r=n-1;
        int result=n+1;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if(array[mid][0]>=currentJobEnd){
                result=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        
        return result;
    }
    
    int solve(vector<vector<int>> &array,int index){
        if(index>=n) return 0;
        
        if(memo[index]!=-1) return memo[index];
        int next=findNextJob(array,index,array[index][1]);
        //if taking the job
        int taken=array[index][2]+solve(array,next);
        
        //if not taking the job
        int notTaken=solve(array,index+1);
        
        return memo[index]=max(taken,notTaken);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n=startTime.size();
        vector<vector<int>> array(n,vector<int> (3,0));
        memset(memo,-1,sizeof(memo));
        
        
        for(int i=0;i<n;i++){  //{start,end,profit}
            array[i][0]=startTime[i];
            array[i][1]=endTime[i];
            array[i][2]=profit[i];
            
        }
        
        auto comp=[&](auto &vec1,auto &vec2){
            return vec1[0]<=vec2[0];
        };
        
        sort(begin(array),end(array),comp);
        
        return solve(array,0);
        
        
    }
};