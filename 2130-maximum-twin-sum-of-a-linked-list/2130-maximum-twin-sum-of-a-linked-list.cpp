/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        if(head->next==NULL){
            return head->val;
        }
        vector<int> temp;
        
        while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
            
        }
        int n=temp.size();
        
        int maxTwin=INT_MIN;
        
        for(int i=0;i<n;i++){
            if((n-1-i)>0){
                maxTwin=max(maxTwin,temp[i]+temp[n-1-i]);
                
            }
            
        }
        return maxTwin;
        
    }
};