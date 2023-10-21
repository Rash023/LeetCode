class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int ele=first;
        for(int i=0;i<encoded.size();i++){
            int temp=ele^encoded[i];
            ele=temp;
            ans.push_back(ele);
        }
        return ans;
    }
};