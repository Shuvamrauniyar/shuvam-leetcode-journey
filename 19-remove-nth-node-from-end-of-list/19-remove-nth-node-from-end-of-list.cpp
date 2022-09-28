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
        if(moveto==0)//to delete first element 
        {
            head=head->next;
            return head;
        }
        // if(n==1)// to delete last element
        // {
        //     prevnode->next=NULL;
        //     return head;
        // }
        int count=0;
        temp=head;
        while(temp!=NULL)//to delete any nodes in between 
        {
            if(moveto==count+1)
            {
                ListNode*dltnode=temp->next;
                temp->next=dltnode->next;  
                return head;
            }
            count++;
            temp=temp->next;
        }
    return head;
    }
    
};