//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int l1=m-l+1;
         int l2=r-m;
         
         int *left=new int[l1];
         int *right=new int[l2];
         
         int k=l;
         for(int i=0;i<l1;i++){
             left[i]=arr[k];
             k++;
         }
         k=m+1;
         for(int i=0;i<l2;i++){
             right[i]=arr[k];
             k++;
         }
         
         int leftIndex=0;
         int rightIndex=0;
         int mainIndex=l;
         
         while(leftIndex<l1 && rightIndex<l2){
             if(left[leftIndex]>right[rightIndex]){
                 arr[mainIndex++]=right[rightIndex++];
                 
             }
             else{
                 arr[mainIndex++]=left[leftIndex++];
             }
         }
         
         while(leftIndex<l1){
             arr[mainIndex++]=left[leftIndex++];
         }
         
         
         while(rightIndex<l2){
             arr[mainIndex++]=right[rightIndex++];
         }
         
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return;
        }
        
        int mid=l+(r-l)/2;
        
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends