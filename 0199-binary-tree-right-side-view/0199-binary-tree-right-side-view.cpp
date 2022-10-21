/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void traverse(TreeNode *root,vector<int>&ans)
        {
            if (root == NULL)
                return;
            queue<TreeNode*> q;
            q.push(root);
          //  vector<int>ans;
            while (!q.empty())
            {
                int size = q.size();
                int x;
                for (int i = 0; i < size; i++)
                {
                    TreeNode *node = q.front();
                    q.pop();
                 x=node->val;
                    if (node->left)
                        q.push(node->left);
                    if (node->right)
                        q.push(node->right);
                }
                ans.push_back(x);
            }
        }
    vector<int> rightSideView(TreeNode *root) {
        vector<int>ans;
        traverse(root,ans);
        return ans;
    }
};