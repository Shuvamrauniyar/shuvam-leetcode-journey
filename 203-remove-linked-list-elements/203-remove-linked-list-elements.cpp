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
    ListNode* removeElements(ListNode* head, int ele) {
        ListNode*temp=head,*checkval;
       bool check=true;
        if(head==NULL)
            return head;
        
        while(head!=NULL&&head->val==ele)
            head=head->next;
        temp=head;
        if(head==NULL)
            return head;
        while(temp->next!=NULL)
        {
            
            if(temp->next->val==ele)
                temp->next=temp->next->next;
            else
                temp=temp->next;
        }
        
        return head;
    }
};
            
