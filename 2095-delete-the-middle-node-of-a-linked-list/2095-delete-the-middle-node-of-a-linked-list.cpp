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
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
            
        }
        if(size==1)
        {
            head=head->next;
            return head;
        }
        int count=1;
        int movetill=size/2;
        temp=head;
        while(temp!=NULL)
        {
            if(count==movetill)
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