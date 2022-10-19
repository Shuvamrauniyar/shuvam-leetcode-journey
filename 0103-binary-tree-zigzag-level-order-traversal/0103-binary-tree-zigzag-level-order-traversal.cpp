/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:

        void traversal(TreeNode *root, vector<vector < int>> &ans, vector< int > ds)
        {
            if (root == NULL)
                return;
            queue<TreeNode*> q;
            q.push(root);
            int count = 1;
            while (!q.empty())
            {

                int size = q.size();
                vector<int> ds;
               	// cout<<size<<endl;
                for (int i = 0; i < size; i++)
                {
                    TreeNode *temp = q.front();
                    q.pop();
                    if (temp->left != NULL)
                        q.push(temp->left);
                    if (temp->right != NULL)
                        q.push(temp->right);
                    ds.push_back(temp->val);
                }

                if (count % 2 == 0)
                    reverse(ds.begin(), ds.end());
                count++;
                ans.push_back(ds);
            }
        }

    vector<vector < int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<int> ds;
        vector<vector < int>> ans;
        traversal(root, ans, ds);
        return ans;
    }
};