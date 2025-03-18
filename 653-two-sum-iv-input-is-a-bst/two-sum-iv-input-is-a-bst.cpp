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
    bool findTarget(TreeNode* root, int k) {
        if(!root) return true;
        vector<int> ans;
        inOrder(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            for(int j=1;j<ans.size();j++)
        {
            if(ans[i]+ans[j]==k && ans[i]!=ans[j] )
            {
                return true;
            }
        }
        }
        return false;
    }

private:
        void  inOrder(TreeNode* root,vector<int> & ans)
        {
            if(!root) return ;
            inOrder(root->left,ans);
            ans.push_back(root->val);
            inOrder(root->right,ans);
        }
};