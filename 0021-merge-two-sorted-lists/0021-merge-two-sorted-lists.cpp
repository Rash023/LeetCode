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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        ListNode *list3=new ListNode();
        if(temp1==NULL && temp2==NULL){
            return NULL;
        }
        
        if(temp1==NULL){
            return temp2;
        }
        
        if(temp2==NULL){
            return temp1;
        }
        if(temp1->val <=temp2->val){
            list3->val=temp1->val;
            temp1=temp1->next;
        }
        
        else{
            list3->val=temp2->val;
            temp2=temp2->next;
            
        }
        
        ListNode *temp3=list3;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <=temp2->val){
                temp3->next=temp1;
                temp3=temp3->next;
                temp1=temp1->next;
            }
            else{
                temp3->next=temp2;
                temp3=temp3->next;
                temp2=temp2->next;
            }
        }
        
        while(temp1!=NULL){
            temp3->next=temp1;
            break;
        }
        while(temp2!=NULL){
            temp3->next=temp2;
            break;
        }
        
        return list3;
        
        
    }
};