class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        double mid=n/2;
        if (n%2!=0){
            
            return nums1[mid];


        }
        else{
            double l=(double(nums1[mid])+double(nums1[mid-1]))/2;
            return l;

        }
    }
};