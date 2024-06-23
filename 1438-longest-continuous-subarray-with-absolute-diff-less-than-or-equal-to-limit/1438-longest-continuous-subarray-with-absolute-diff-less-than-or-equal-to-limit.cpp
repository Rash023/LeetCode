class Solution {
public:
    typedef pair<int,int> P;
    int longestSubarray(vector<int>& nums, int limit) {
        int maxLen=1,n=nums.size(),j=0;
        priority_queue<P> maxHeap;
        priority_queue<P,vector<P>,greater<P>> minHeap;
        for(int i=0;i<n;i++){
            minHeap.push({nums[i],i});
            maxHeap.push({nums[i],i});
            while(maxHeap.top().first-minHeap.top().first>limit){
                j=min(maxHeap.top().second,minHeap.top().second)+1;
                while(maxHeap.top().second<j) maxHeap.pop();
                while(minHeap.top().second<j) minHeap.pop();
            }
            maxLen=max(maxLen,i-j+1);
        }
        return maxLen;
    }
};