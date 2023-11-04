class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int leftMax=left.size()==0? 0: *max_element(begin(left),end(left));
        
        int rightMin=right.size()==0? n: *min_element(begin(right),end(right));
        
        return max(leftMax,n-rightMin);
        
    }
};