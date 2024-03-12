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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> mp;
        
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        mp[0]=dummy;
        
        int preSum=0;
        
        while(head!=NULL){
            preSum+=head->val;
            
            if(mp.find(preSum)!=mp.end()){
                ListNode *start=mp[preSum];
                ListNode *temp=start;
                int pSum=preSum;
                
                while(temp!=head){
                    temp=temp->next;
                    pSum+=temp->val;
                    
                    if(temp!=head){
                        mp.erase(pSum);
                        
                    }
                    
                }
                start->next=head->next;
                
            }
            else{
                mp[preSum]=head;
                
            }
            head=head->next;
            
        }
        
        return dummy->next;
        
        
    }
};