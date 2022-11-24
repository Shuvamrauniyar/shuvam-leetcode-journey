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
    TreeNode * bst(vector<int>&nums,int low ,int high)
    {
        if(low>high)
            return NULL;
        
            int mid=(low+high)/2;
         //temp=new TreeNode (nums[mid]);
        TreeNode* temp=new TreeNode (nums[mid]);
            
            temp->left=bst(nums,low,mid-1);
            temp->right=bst(nums,mid+1,high);
            
        
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums,0,nums.size()-1);
        
        
        
       
    }
};