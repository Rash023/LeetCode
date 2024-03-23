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
    void reorderList(ListNode* head) {
        vector<int> ans;
        
        ListNode *temp=head;
        
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
            
            
        }
        
        temp=head;
        
        
        int i=0;
        int j=ans.size()-1;
        int cnt=0;
        
        while(i<=j && temp!=NULL){
            if(cnt&1){
                temp->val=ans[j--];
                
            }
            else{
                temp->val=ans[i++];
                
            }
            temp=temp->next;
            cnt++;
            
        }
        
    }
};