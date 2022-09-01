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
    int findgood(TreeNode* root,int maxi)
    {
        if(root==NULL)return 0;
        int gcount=0;
        if(root->val>=maxi)
        {
                    cout<<root->val<<endl;

           gcount=1+findgood(root->left,max(maxi,root->val))+findgood(root->right,max(maxi,root->val));
        
        }
        else
        {
           gcount= findgood(root->left,maxi)+findgood(root->right,maxi);
            
}
        
       return gcount; 
        
        
}
    int goodNodes(TreeNode* root) {
        int maxi=root->val;
        return findgood(root,maxi);
        
    }
};