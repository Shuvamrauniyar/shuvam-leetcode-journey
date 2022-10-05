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
    
    TreeNode* add(TreeNode* root,int val ,int depth,int count)
    {
        if(depth==1){
            TreeNode *newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;
        }
        if(root==NULL)return root;
        if(depth-1==count&&root!=NULL)
        {
            TreeNode* leftnode=new TreeNode(val);
            TreeNode* rightnode=new TreeNode(val);
            leftnode->left=root->left;
            root->left=leftnode;
           // leftnode->right=NULL:
            //leftnode->val=val;
            rightnode->right=root->right;
            root->right=rightnode;
           // rightnode->left=NULL;
          //  rightnode->val=val;
            return root;
        }
        add(root->left,val,depth,count+1);
        add(root->right,val,depth,count+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       return add(root,val,depth,1);
    }
};