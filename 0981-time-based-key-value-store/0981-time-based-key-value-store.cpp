class TimeMap {
public:
    map<string,vector<pair<string,int>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});

    }
    
    string get(string key, int timestamp) {
    
        int l=0;
        int r=mp[key].size()-1;
        int mid=l+(r-l)/2;
      

        while(l<=r){
           
           
            if(timestamp==mp[key][mid].second){
                return mp[key][mid].first;

            }
            else if(mp[key][mid].second<timestamp){
                
                l=mid+1;

            }
            else{
                r=mid-1;

            }
            mid=l+(r-l)/2;

        }
        if(r<0) return "";
        return mp[key][r].first;

    }

};