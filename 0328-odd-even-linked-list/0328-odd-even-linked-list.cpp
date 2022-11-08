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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *slowodd=head;
        if(head==NULL)
            return head;
        ListNode *fasteven=head->next,*evenhead=head->next;
            if(slowodd->next==NULL||fasteven->next==NULL)
                return head;
        while(fasteven->next&&fasteven->next->next)
        {
            slowodd->next=slowodd->next->next;
            fasteven->next=fasteven->next->next;
            slowodd=slowodd->next;
            fasteven=fasteven->next;
            cout<<fasteven->val<<endl;
        }
        // cout<<fasteven->val<<endl;
        // fasteven->next=NULL;
        if(slowodd->next->next)
        {slowodd->next=slowodd->next->next;
        slowodd=slowodd->next;
        }
         cout<<fasteven->val<<endl;
        fasteven->next=NULL;
        slowodd->next=evenhead;
        // cout<<slowodd->next->val<<endl;
         cout<<head->val<<endl;
        ListNode *temp=head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
            
        }
      return head;
    }

};