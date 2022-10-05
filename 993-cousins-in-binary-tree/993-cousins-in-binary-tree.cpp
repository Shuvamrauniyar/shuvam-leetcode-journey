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
    
    void checkcousins(TreeNode* root, int x, int y,vector<pair<int,int>>&track,int depth,int parent)
    {
        if(root==NULL)return;
        if(root->val==x)
        {
            track.push_back({parent,depth});
           
        }
         if(root->val==y)
        {
            track.push_back({parent,depth});
        }
        checkcousins(root->left,x,y,track,depth+1,root->val);
        checkcousins(root->right,x,y,track,depth+1,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        vector<pair<int,int>>track;
        int depth=1;
        checkcousins(root,x,y,track,depth,-1);
        if(track[0].first!=track[1].first&&track[0].second==track[1].second)
            return true;
        return false;
    }
};