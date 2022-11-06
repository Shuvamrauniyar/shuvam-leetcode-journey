/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL ||root==p ||root==q)
            return root;
        // if(root->left->val==p->val||root->left->val==q->val)
        //     return root->left;
        // if(root->right->val==p->val||root->right->val==q->val)
        //     return root->right;
        
       TreeNode *left= lowestCommonAncestor(root->left,p,q);
       TreeNode *right= lowestCommonAncestor(root->right,p,q);
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        return root;
    }
};