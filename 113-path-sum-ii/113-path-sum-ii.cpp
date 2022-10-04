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
    
     void pathSum(TreeNode* root, int targetSum,vector<vector<int>>&ans,vector<int>ds) {
         if(root==NULL)return ;
         if(root->left==NULL&&root->right==NULL)
         {
             targetSum-=root->val;
             if(targetSum==0){
                 ds.push_back(root->val);
                 ans.push_back(ds);
             }
                 return;
         }
         ds.push_back(root->val);
        pathSum(root->left,targetSum-root->val,ans,ds);
         pathSum(root->right,targetSum-root->val,ans,ds);
         ds.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ds;
        vector<vector<int>>ans;
            pathSum(root,targetSum,ans,ds);
        return ans;
        
    }
};