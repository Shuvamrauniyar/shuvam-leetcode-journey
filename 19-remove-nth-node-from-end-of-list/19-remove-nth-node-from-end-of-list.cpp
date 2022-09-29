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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode *temp;
        int size=0;
    temp=head;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
        if(n==size)
        {
            head=head->next;
            return head;
        }
       temp=head;
        int count=1;
        while(temp!=NULL)
        {
            if(count==size-n)
            {
                temp->next=temp->next->next;
            }
            else
                temp=temp->next;
            count++;
        }
        return head;
        
    }
};