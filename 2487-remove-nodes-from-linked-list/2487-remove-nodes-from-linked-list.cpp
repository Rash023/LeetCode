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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        
        ListNode *temp=head;
        
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
            
        }
        
        ListNode *root=NULL;
        int maxEle=INT_MIN;
        
        while(!st.empty()){
            if(st.top()->val>=maxEle){
                maxEle=st.top()->val;
                ListNode *newNode=st.top();
                newNode->next=root;
                root=newNode;
            
            }
            st.pop();
            
        }
        
        return root;
        
    }
};