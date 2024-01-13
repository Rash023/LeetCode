/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode insertionSortList(ListNode head) {
        ListNode ans=new ListNode(head.val);
        ListNode curr=head.next;
        
        while(curr!=null){
            ListNode next_node=curr.next;
            
            ListNode t1=ans;
            ListNode preptr=null;
            
            while(t1!=null && t1.val<curr.val){
                preptr=t1;
                t1=t1.next;
            }
            
            //insert at beginning
            
            if(preptr==null){
                curr.next=t1;
                ans=curr;
            }
            
            //insert at end
            else if(preptr.next==null){
                preptr.next=curr;
                curr.next=null;
            }
            
            //insert at middle
            else{
                preptr.next=curr;
                curr.next=t1;
            }
            
            curr=next_node;
        }
        
        return ans;
        
        
    }
}