/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode *,bool> table;
        
        ListNode *temp=head;
        
        while(temp!=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                return temp;
            }
            
            temp=temp->next;
        }
        
        return NULL;
    }
};