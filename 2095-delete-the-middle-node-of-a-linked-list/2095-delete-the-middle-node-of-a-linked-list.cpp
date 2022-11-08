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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head,*fast=head,*slowprev=head;;
        int size=0;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slowprev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow&&slowprev->next)//this case is also for list with two elements
        {
            slowprev->next=slow->next;
            return head;
        }
       
        return NULL;//this is if the list has only one elements
    }
};