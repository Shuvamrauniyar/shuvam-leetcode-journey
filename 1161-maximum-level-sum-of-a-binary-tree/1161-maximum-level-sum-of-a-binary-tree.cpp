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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=INT_MIN;
        int level=1;
        int leveltrack=0;
        while(!q.empty())
        {
            int size=q.size();
            int sum1=0;
            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                int x=node->val;
                q.pop();
                sum1+=x;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                
            }
            if(sum1>sum)
                {
                sum=sum1;
            leveltrack=level;
                }
            cout<<sum<<" ";
            level++;
        }
        return leveltrack;
        
    }
};