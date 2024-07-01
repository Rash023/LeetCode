class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3) return false;
        for(int i=0;i<arr.size()-2;i++){
            bool flag=((arr[i]&1)&&(arr[i+1]&1)&&(arr[i+2]&1));
            if(flag) return true;
        }
        return false;
    }
};