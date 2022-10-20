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
    void traverse(TreeNode *root,int col,int row,map<int,map<int,multiset<int>>>&m)
    {

    if(root==NULL)
        return ;
        //m[col][row].push_back(root->val); //it is multiset using insert function
        m[col][row].insert(root->val);
    traverse(root->left,col-1,row+1,m);
        traverse(root->right,col+1,row+1,m);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        map<int,map<int,multiset<int>>>m; //(col,row,overlapped set of nodes which will be sorted)
        traverse(root,0,0,m);
        for(auto i:m)
        {
            vector<int>temp;
            for(auto j:i.second)
            {
                //copy(j.second.begin(),j.second.end());
            temp.insert(temp.end(),j.second.begin(),j.second.end());
            //sort(temp.begin(),temp.end());
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};