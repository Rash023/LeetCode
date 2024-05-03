class Solution {
public:
    vector<string> getTokens(string version){
        stringstream v(version);
        
        vector<string> ans;
        string token="";
        while(getline(v,token,'.')){
            ans.push_back(token);
            
        }
        
        return ans;
        
    }
    int compareVersion(string version1, string version2) {
        vector<string> v1=getTokens(version1);
        vector<string> v2=getTokens(version2);
        int n=v1.size(),m=v2.size();
        
        int i=0;
        
        
        
        while(i<n || i<m){
            int a=i<n?stoi(v1[i]):0;
            int b= i<m?stoi(v2[i]):0;
            
            if(a>b) return 1;
            
            else if(a<b) return -1;
            
            else i++;
            
        }
        
        return 0;
        
    }
};