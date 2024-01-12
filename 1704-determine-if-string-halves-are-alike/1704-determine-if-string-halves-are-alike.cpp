class Solution {
private:
  bool isVowel(char ch){
      if(ch=='a'| ch== 'e'||ch== 'i'|| ch== 'o'|| ch== 'u'|| ch== 'A'|| ch== 'E'|| ch== 'I'||ch== 'O'|| ch== 'U'){
          return true;
      }
      return false;
  }
public:
    bool halvesAreAlike(string s) {
        int cnt1=0;
        int cnt2=0;
        int mid=s.size()/2;
        for(int i=0;i<mid;i++){
            if(isVowel(s[i])) cnt1++;
            
        }

        for(int j=mid;j<s.size();j++){
            if(isVowel(s[j])) cnt2++;
            
        }
        
        return cnt1==cnt2;
        
        
    }
};