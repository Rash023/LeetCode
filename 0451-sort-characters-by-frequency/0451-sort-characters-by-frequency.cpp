class Solution {
public:
    static bool sortByFrequency(const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second; // Sort by frequency in descending order
    }
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        vector<pair<char,int>> v(mp.begin(),mp.end());
        
        sort(v.begin(),v.end(),sortByFrequency);
        
        
        string ans="";
        
        for(int i=0;i<v.size();i++){
            while(v[i].second!=0){
                ans.push_back(v[i].first);
                v[i].second--;
            }
            
        }
        
        return ans;
        
        
        
    }
};