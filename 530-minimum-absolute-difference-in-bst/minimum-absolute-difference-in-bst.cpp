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
    int getMinimumDifference(TreeNode* root) {
        if(!root) return INT_MAX;
        vector<int>  ans;
        inOrderTraversal(root,ans);

        int diff=INT_MAX;
        for (int i = 0; i < ans.size() - 1; i++) {
            diff = min(diff, abs(ans[i] - ans[i + 1]));  
    }
            return diff;

    }

private:
        void inOrderTraversal(TreeNode* & root,vector<int> & ans)
        {
            if(!root) return ;
            inOrderTraversal(root->left,ans);
            ans.push_back(root->val);
            inOrderTraversal(root->right,ans);
        }
};