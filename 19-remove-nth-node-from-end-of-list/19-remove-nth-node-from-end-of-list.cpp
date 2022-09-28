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
        ListNode *temp=head,*prevnode;
        int size=0; 
      
        while(temp->next!=NULL)
        {
            prevnode=temp;
            temp=temp->next;
            size++;
        }
        ListNode* lastnode=temp;
        size++;
        
       // cout<<size<<endl;
        int moveto=size-n;
        temp=head;
        if(moveto==0)
        {
            head=head->next;
           // free(temp);
            return head;
        }
        if(n==1)
        {
            prevnode->next=NULL;
            //free(lastnode);
            return head;
        }
        int count=0;
        temp=head;
        while(temp!=NULL)
        {
            if(moveto==count+1)
            {
                ListNode*dltnode=temp->next;
                temp->next=dltnode->next;
                //cout<<dltnode->val;
               // free(dltnode);  
                return head;
            }
            count++;
            temp=temp->next;
        }
    return head;
    }
    
};