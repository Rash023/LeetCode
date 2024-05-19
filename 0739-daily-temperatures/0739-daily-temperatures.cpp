class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>> st;
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            int val=temperatures[i];
            
            while(!st.empty() && st.top().first<=val) st.pop();
            
            res[i]=st.empty()?0:st.top().second-i;
            
            st.push({val,i});
        
        }
        
        return res;
    }
};