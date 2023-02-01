//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node *reverse(Node *head)
    {
        Node *curr=head,*prev = NULL,*nextnode = NULL;
        while(curr != NULL)
        {
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *revhead = reverse(head);
        Node *temp = revhead;
        int carry = 1;
        Node * lastnode = NULL;
        while(temp)
        {
            if(carry)
            temp->data += 1;
            if(temp->data > 9)
            {
                temp->data =0;
                carry =1;
            }
            else 
            carry =0;
            
            if(temp->next == NULL)
            lastnode = temp;
            
            temp = temp->next;
        }
        if(carry)
        {
            Node *newnode = new Node(1);
            lastnode->next=newnode;
        }
        return reverse(revhead);
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends