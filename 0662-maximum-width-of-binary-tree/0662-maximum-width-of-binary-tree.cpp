/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<pair<TreeNode *,int>>q;
        q.push({root,0});
        int ans=0;
        while(!q.empty())
        {
          int curmin=q.front().second;
            int leftmost,rightmost;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
           TreeNode *temp=q.front().first;
                int cur_id=q.front().second-curmin;
                q.pop();
                
               if(i==0)leftmost=cur_id;
                if(i==size-1)rightmost=cur_id;
            if(temp->left)
            {
                q.push({temp->left,(long long)2*cur_id+1});
            }
             if(temp->right)
            {
                q.push({temp->right,(long long)2*cur_id+2});
            }
          
        }
            ans=max(ans,rightmost-leftmost+1);
        }
        return ans;
    }
};