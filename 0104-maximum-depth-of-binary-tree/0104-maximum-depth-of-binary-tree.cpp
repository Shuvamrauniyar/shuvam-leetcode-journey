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
    int maxdepth=0;
    void finddepth(TreeNode * root,int depth)
    {
        if(root==NULL)
            return ;
        depth++;
        maxdepth=max(depth,maxdepth);
        finddepth(root->left,depth);
        finddepth(root->right,depth);
        depth--;
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
       // depth++;
        finddepth(root,0);
       return maxdepth;
    }
};