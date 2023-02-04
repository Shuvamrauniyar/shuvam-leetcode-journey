//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


// } Driver Code Ends
//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        
        vector<pair<int,int>>ans1;
        Node  *left = head;
        Node *tail = head;
        
        int l = 0 ,r = 0;
        while(tail->next)
        {
            tail = tail->next;
            
            r++;
        }
       // cout<<tail->data;
        
       // cout<<r<<endl;
        int pairSum = 0;
        while(left != NULL && tail != NULL && l<r)
        {
            pairSum = left->data + tail->data;
               // cout<<left->data<<" "<<tail->data<<endl;
            if(target == pairSum)
            {
                ans1.push_back({left->data,tail->data});
                left = left->next;
                tail = tail->prev;
                l++,r--;
            } 
            else if (target < pairSum)
                {
                    tail = tail->prev;
                    r--;
                }
            else{
                left = left->next;
                l++;
            }
        }
        return ans1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> target >> n;
        int a;
        cin >> a;
        Node *head = new Node(a);
        Node *tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            tail->next = new Node(a);
            tail->next->prev = tail;
            tail = tail->next;
        }
        Solution ob;
        auto ans = ob.findPairsWithGivenSum(head, target);
        if (ans.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << "(" << ans[i].first << "," << ans[i].second << ")"
                     << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends