class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(begin(seats),end(seats));
        sort(begin(students),end(students));
        int n=seats.size();
        int res=0;
        for(int i=0;i<n;i++){
            res+=abs(students[i]-seats[i]);
        }
        return res;
    }
};