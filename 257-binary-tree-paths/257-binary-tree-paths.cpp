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
    
    void findpath(TreeNode* root,vector<string>&ans,string s)
    {
        if(root==NULL)return ;
        if(root->left==NULL&&root->right==NULL){
            s+=to_string(root->val);
            ans.push_back(s);
        return;
        } 
       s+=to_string(root->val)+"->";
        
        findpath(root->left,ans,s);
        findpath(root->right,ans,s);
        s.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
    vector<string>ans;
        string s;
        findpath(root,ans,s);
        return ans;
    }
};