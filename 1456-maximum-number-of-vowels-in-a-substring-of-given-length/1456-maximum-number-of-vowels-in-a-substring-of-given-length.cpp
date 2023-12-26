class Solution {
public:
    bool isVowel(char ch)
    {
        string str = "aeiou";
        return (str.find(ch) != string::npos);
    }
 
    int maxVowels(string s, int k) {
        //creating the initial window
        queue<char> q;
        int ways=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                ways++;
            }
            q.push(s[i]);
            
        }
        
        int maxi=ways;
        int index=k;
        while(index<s.size()){
            if(isVowel(q.front())){
                ways--;
            }
            q.pop();
            if(isVowel(s[index])){
                ways++;
            }
            q.push(s[index++]);
            maxi=max(ways,maxi);
        }
        
        return maxi;
    }
};