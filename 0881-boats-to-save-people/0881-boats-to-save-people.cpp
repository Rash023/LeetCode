class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int cnt = 0;
        int left = 0, right = people.size() - 1;
        
        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                left++; // Move the lighter person to the next position
            }
            right--; // Move the heavier person to the next position
            cnt++; // Increment boat count
        }
        
        return cnt;
    }
};
