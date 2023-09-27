class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s; //First is the number while second is the position
        
        int n= temperatures.size();
        vector<int> result(n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            int curr = temperatures[i];
            while(!s.empty() && s.top().first <= curr) s.pop();
            
            result[i] = s.empty() ? 0 : s.top().second - i;

            s.push({curr,i});
        }
        
        return result;
    }
};