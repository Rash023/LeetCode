class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>v;
        priority_queue<int,vector<int>,greater<>>p;
        int n=nums1.size();
        long long res=0,s=0;
        for(int i=0;i<n;i++) v.push_back({nums2[i],nums1[i]});
        sort(v.begin(),v.end(),greater<>());
        for(int i=0;i<n;i++)
        {
            s+=v[i].second;
            p.push(v[i].second);
            if(p.size()==k)
            {
                res=max(res,s*v[i].first);
                s-=p.top();
                p.pop();
            }
        }
        return res;
    }
};