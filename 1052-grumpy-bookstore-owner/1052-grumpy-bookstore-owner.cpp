class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int totalCust=0;
        int maxCust=0;
        int optimizedCust=0;
        int i=0,j=0;
        int n=customers.size();
        while(i<n){
            if(grumpy[i]==1) optimizedCust+=customers[i];
            else totalCust+=customers[i];
            maxCust=max(maxCust,optimizedCust);
            while(i-j+1>=minutes){           
                if(grumpy[j]==1) optimizedCust-=customers[j];
                j++;
            }      
            i++;
        }
        return totalCust+maxCust;
    }
};