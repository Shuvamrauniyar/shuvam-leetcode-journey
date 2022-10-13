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
        //cout<<size;
        if(size==1)
        {
            head=head->next;
            return head;
        }
        int count=size/2;
        temp=head;
        while(count--)
        {
            if(count==0)
            {
                temp->next=temp->next->next;
            }
            else
                temp=temp->next;
        }
        return head;
    }
};