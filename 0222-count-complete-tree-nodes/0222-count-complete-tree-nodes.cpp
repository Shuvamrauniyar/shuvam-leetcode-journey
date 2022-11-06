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
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        
        while(!q.empty())
        {
            int size=q.size();
            bool flag=true;
            for(int i=0;i<size;i++)
            {
                TreeNode * x=q.front();
                count++;
                q.pop();
                if(x->left)
                    q.push(x->left);
                else
                    flag=false;
                if(x->right)
                    q.push(x->right);
                else
                    flag=false;
               if(flag==false)
                   break;
            }
            if(flag==false)
                break;
           
        }
         cout<<count<<endl;//to check how time forloop is running
        return count+q.size();
    }
};