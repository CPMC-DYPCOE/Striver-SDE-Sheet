https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res=new ListNode();
        res->next=head;
        ListNode* slow = res;
        ListNode* fast = res;
        
        for(int i=1;i<=n;i++)fast=fast->next;
        
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return res->next;
    }
};