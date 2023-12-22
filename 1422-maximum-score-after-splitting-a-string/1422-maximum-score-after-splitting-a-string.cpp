class Solution {
public:
    int maxScore(string s) {
        int score=0;
        int onesCount=count(s.begin(),s.end(),'1');
        int zerosCount=0;
        
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zerosCount++;
            }
            if(s[i]=='1') onesCount--;
            
            score=max(zerosCount+onesCount,score);
        }
        
        return score;
        
    }
};