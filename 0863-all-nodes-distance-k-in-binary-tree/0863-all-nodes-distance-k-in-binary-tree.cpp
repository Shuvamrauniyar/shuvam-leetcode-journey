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
    void mark_parent(TreeNode *root,unordered_map<TreeNode*,TreeNode *> &parent)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            // TreeNode *temp=q.front();
            // int size=q.size();
            // q.pop();
             int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left)
                {

                    parent[temp->left]=temp;
                q.push(temp->left);
                }
                 if(temp->right)
                {

                    parent[temp->right]=temp;
                q.push(temp->right);
                }
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode *>parent;
        mark_parent(root,parent);
        unordered_map<TreeNode*,bool>vis;//this comes into use when we are traversing upward in paraent side
        queue<TreeNode *>q;
        q.push(target);
        vis[target]=true;
       
       // cout<<parent[target]->val<<endl;
        int count=0;
        while(!q.empty())
        {
          
            int size=q.size();
            if(count++==k)
                break;
            for(int i=0;i<size;i++)
            {
                  TreeNode *temp=q.front();
                   q.pop();
                if(!vis[temp->left]&&temp->left)
                {

                    q.push(temp->left);
                    vis[temp->left]=true;
                    
                }
                 if(!vis[temp->right]&&temp->right)
                {

                    q.push(temp->right);
                    vis[temp->right]=true;
                    
                }
                if(parent[temp]&&!vis[parent[temp]])
                {

                    q.push(parent[temp]);
                    vis[parent[temp]]=true;
                }
              
            }
  
        }
          vector<int>ans;
             while(!q.empty()){
                 TreeNode *x=q.front();
              ans.push_back(x->val);
                q.pop();
             }
        return ans;
    }
};