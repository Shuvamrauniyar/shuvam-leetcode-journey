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
    
    //this solution throws error as max 100 length of string is not possible tonvert into string; 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=l1,*temp2=l2;
         ListNode *dummy=new ListNode(0),*curr=dummy;
        
        int c=0;//  c is for maintaining carry
        
        while(temp1!=NULL||temp2!=NULL||c!=0)
            //checking for carry also lets say at last node  we may get sum >10 so there must carry which need to be added at last although we dont have any node left
        {
            int a=temp1?temp1->val:0;
            //checking if temp1==NULL or not and assigining value accordingly
            int b=temp2?temp2->val:0;
            if(temp1)
                temp1=temp1->next;
            if(temp2)
            temp2=temp2->next;
           
          int  sum=a+b+c;
            c=sum/10;
             if(sum>=10)
                c=1;
            else c=0;
            sum=sum%10; //because sum must be a single digit
           // cout<<sum<<" ";
            ListNode *newnode=new ListNode(sum);
            curr->next=newnode;
            curr=curr->next;
        }
    
        return dummy->next;
    }
};