class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> v(n,0);
        for(int i=0;i<roads.size();i++){
            v[roads[i][0]]++;
            v[roads[i][1]]++;
        }
        sort(begin(v),end(v));
        long long res=0;
        for(int i=v.size()-1;i>=0;i--){
            res+=v[i]*n;
            n--;
        }
        return res;
    }
};