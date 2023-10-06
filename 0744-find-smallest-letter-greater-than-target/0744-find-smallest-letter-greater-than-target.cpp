class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch;
        int s=0;
        int e=letters.size()-1;
        int mid=s+(e-s)/2;
        sort(letters.begin(),letters.end());
        if(letters[letters.size()-1]<=target){
            return letters[0];
        }
        
        while(s<=e){
            
            if(letters[mid]>target){
                ch=letters[mid];
                e=mid-1;
                
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        
        return ch;
    }
};