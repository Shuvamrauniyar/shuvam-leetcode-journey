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
    ListNode *reverse(ListNode*curr,ListNode* prevnode)
    {
         if(curr==NULL)
            return prevnode;
        
            ListNode* nextnode=curr->next;
            curr->next=prevnode;
            prevnode=curr;
            curr=nextnode;
        return reverse(curr,prevnode);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head,*nextnode=NULL,*prevnode=NULL;
        // while(curr!=NULL)
        // {
        //     nextnode=curr->next;
        //     curr->next=prevnode;
        //     prevnode=curr;
        //     curr=nextnode;
        // }
       
        
       // return prevnode;
        return reverse(curr,prevnode);
    }
};