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
    int maxsum=INT_MIN;
    
    int findmaxsum(TreeNode*root)
    {
          if(root==NULL)
            return 0;
        int lh=max(0,findmaxsum(root->left));
        int rh=max(0,findmaxsum(root->right));
       // if(root->val>=0)
        maxsum=max(maxsum,root->val+lh+rh);
    
          return max(lh,rh)+root->val;
    }
    int maxPathSum(TreeNode* root) {
      
        findmaxsum(root);
        return maxsum;
    }
};