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
    ListNode* middleNode(ListNode* head) {
        int i=0;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            i++;
            temp=temp->next;
        }
        i=i/2+1;
        temp=head;
        while(--i)
        {
            // cout<<i<<" ";
            // // if(i==1)
            // //     break;
            temp=temp->next;
        }
        return temp;
    }
};