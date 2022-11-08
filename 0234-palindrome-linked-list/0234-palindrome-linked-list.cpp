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
    //logic-->first find the middle node then secondly reverse all the nodes after the middle node then compare one by one if equal or not
    ListNode * reverse(ListNode *head)
    {
        ListNode *prevnode=NULL,*nextnode;
       while(head)
       { nextnode=head->next;
        head->next=prevnode;
        prevnode=head;
        head=nextnode;
       }
      //  cout<<prevnode->val;
        return prevnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        slow->next=reverse(slow->next);
        
        ListNode *start1=head,*start2=slow->next;
        while(start2)
        {
            if(start1->val!=start2->val){
              cout<<start1->val<<" "<<start2->val<<endl;
                return false;
            }
            start1=start1->next;
            start2=start2->next;
            
        }
        return true;
    }
};