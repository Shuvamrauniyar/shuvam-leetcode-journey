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
        if(head==NULL) //if list is empty
            return head;
         ListNode *fasteven=head->next,*evenhead=head->next; //this line must be declared after above ;lines bcz if head= null then we cant access head->next;  it will give RE error
        //     if(slowodd->next==NULL||fasteven->next==NULL) //if list has one or two elements
        //         return head;
        while(fasteven&&fasteven->next)
        {
            slowodd->next=slowodd->next->next;//assigning alternate node(odd indices)
            fasteven->next=fasteven->next->next;
            slowodd=slowodd->next;
            fasteven=fasteven->next;
            //cout<<fasteven->val<<endl;
        }
        // cout<<fasteven->val<<endl;
        // fasteven->next=NULL;
        // if(slowodd->next->next) //for testcase like [1,2,3,4]
        // {slowodd->next=slowodd->next->next;
        // slowodd=slowodd->next;
        // }
         //cout<<fasteven->val<<endl;
       // fasteven->next=NULL; //[2->4->5] here 4 still points 5 but 4 is last element so it must point to null
        slowodd->next=evenhead;
        // cout<<slowodd->next->val<<endl;
//          cout<<head->val<<endl;
//         ListNode *temp=head;
// //         while(temp)
//         {
//             cout<<temp->val<<" ";
//             temp=temp->next;
            
//         }
      return head;
    }

};