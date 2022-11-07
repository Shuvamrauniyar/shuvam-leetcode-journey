/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *prev,*temp=node;
//         while(temp->next!=NULL)
//         {
//             temp->val=temp->next->val;
//             prev=temp;
//             temp=temp->next;
//             if(temp->next==NULL){
//                 prev->next=NULL;
//                 break;
//             }
                
//         }
        node->val=node->next->val;
        node->next=node->next->next;
    }
};