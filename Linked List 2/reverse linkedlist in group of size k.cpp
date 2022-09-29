https://leetcode.com/problems/reverse-nodes-in-k-group/
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp != NULL){
            n++;
            temp=temp->next;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* cur;
        ListNode* nxt;
        while(n>=k){
            cur=prev->next;
            nxt=cur->next;
            for(int i=1;i<k;i++){
                cur->next=nxt->next;
                nxt->next=prev->next;
                prev->next=nxt;
                nxt=cur->next;
            }
            n-=k;
            prev=cur;
            
        }
        return dummy->next;
    }
};