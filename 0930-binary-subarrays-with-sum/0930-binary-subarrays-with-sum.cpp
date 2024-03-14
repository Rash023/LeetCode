

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixSumCount;
        int cnt = 0;
        int prefixSum = 0;

        for (int num : nums) {
            prefixSum += num;
            if (prefixSum == goal) cnt++; // Subarray from start of array
            if (prefixSumCount.find(prefixSum - goal) != prefixSumCount.end()) {
                cnt += prefixSumCount[prefixSum - goal];
            }
            prefixSumCount[prefixSum]++;
        }

        return cnt;
    }
};
