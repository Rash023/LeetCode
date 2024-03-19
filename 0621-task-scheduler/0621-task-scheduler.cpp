class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26,0);
        priority_queue<int> pq;
        int ans=0;
        
        for(int i=0;i<tasks.size();i++){
            v[tasks[i]-'A']++;
            
        }
        
        for(auto &it:v){
            if(it>0){
             pq.push(it);
            }
           
            
        }
        
        while(!pq.empty()){
            vector<int> temp;

            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                     temp.push_back(pq.top()-1);
                    pq.pop();
                 }
               

            }

            for(auto &i:temp){
                if(i>0){
                    pq.push(i);

                }
            }

            if(pq.empty()){
                ans+=temp.size();
            }
            else{
                ans+=n+1;

            }
        }
        
        return ans;
        
    }
};