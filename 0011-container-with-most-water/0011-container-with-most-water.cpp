class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int s=0;
        int e=height.size()-1;
        while(s<e){
            maxarea=max(maxarea,min(height[s],height[e])*(e-s));
            if(height[s]>height[e]){
                e--;
            }
            else{
                s++;
            }
        }
        
        return maxarea;
    }
};