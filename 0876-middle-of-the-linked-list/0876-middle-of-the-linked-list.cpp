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
private:
    int getLength(ListNode *temp){
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            
            n++;
        }
        return n;
    }
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int len=getLength(temp);
        int index=floor(len/2);
        
        if(index==0){
            return temp;
        }
        while(temp!=NULL ){
            index--;
            
            temp=temp->next;
            if(index==0) break;
            
        }
        
        return temp;
    }
};