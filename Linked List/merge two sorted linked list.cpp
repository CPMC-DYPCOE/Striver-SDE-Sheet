https://leetcode.com/problems/merge-two-sorted-lists/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp, *merged;
        temp = new ListNode();
        merged = temp;
         
        
        ListNode* first = list1;
        ListNode* second = list2;
        
        while(first && second){
            if(first->val < second->val){
                merged->next=first;
                first = first->next;
            }
            else{
                merged->next=second;
                second=second->next;
            }
            merged=merged->next;
        }
        
        if(second){
                merged->next=second;
        }
        
        if(first){
            merged->next=first;
        }
        return temp->next;
    }
};