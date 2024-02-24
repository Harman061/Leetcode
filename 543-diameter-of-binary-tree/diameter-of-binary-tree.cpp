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
private:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
       

        int left=maxDepth(root->left);
        int right=maxDepth(root->right);

        int ans=max(left,right)+1;
        return ans;
    }    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;

        int left =diameterOfBinaryTree(root->left);
        
        int right =diameterOfBinaryTree(root->right);

        int lr =maxDepth(root->left)+maxDepth(root->right);

        return max(left,max(right,lr));
    }
};