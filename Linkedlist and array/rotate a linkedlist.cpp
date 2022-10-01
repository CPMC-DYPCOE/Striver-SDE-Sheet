https://leetcode.com/problems/rotate-list/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL||k == 0) return head;
        int n=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            n++;
        }
        temp->next=head;
        int z=k%n;
        
        for(int i=0;i<n-z;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        
        return head;
    }
};