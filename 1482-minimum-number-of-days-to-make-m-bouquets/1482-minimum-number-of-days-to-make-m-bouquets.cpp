class Solution {
private:
    int canMakeBouquet(vector<int> &bloomDay,int mid,int k){
        int bouquetCount=0;
        int consecutiveCount=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid) consecutiveCount++;
            else consecutiveCount=0;
            if(consecutiveCount>=k){
                bouquetCount++;
                consecutiveCount=0;
            }
        }
        return bouquetCount;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size(),l=0,r=*max_element(begin(bloomDay),end(bloomDay)),mid=l+(r-l)/2;
        int res=-1;
        while(l<=r){
            if(canMakeBouquet(bloomDay,mid,k)>=m){
                res=mid;
                r=mid-1;
            }
            else l=mid+1;
            mid=l+(r-l)/2;
        }
        return res;
    }
};