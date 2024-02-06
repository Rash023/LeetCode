class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);
        
        
        for(int i=1;i<words.size();i++){
            string ele1=words[i-1];
            sort(begin(ele1),end(ele1));
            string ele2=words[i];
            sort(begin(ele2),end(ele2));
            
            if(ele1!=ele2){
                ans.push_back(words[i]);
            }
        }
        
        return ans;
    }
};