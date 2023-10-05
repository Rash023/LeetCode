class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        
        vector<string> z(numRows);
        
        int row=0,i=0;
        bool direction=1;
        
        while(true){
            if(direction){
                while(i<s.size() && row<numRows){
                    z[row++].push_back(s[i++]);
                }
                
                row=numRows-2;
            }
            else{
                while(i<s.size() && row>=0){
                    z[row--].push_back(s[i++]);
                }
                row=1;
            }
            
            if(i>=s.size()) break;
            direction=!direction;
        }
        
        string ans="";
        for(auto it:z){
            ans+=it;
        }
        
        return ans;
        
        
        
        
    }
};