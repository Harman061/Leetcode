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

 /*
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
};*/

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root)
    {
        int diameter=0;
        maxDepth(root,diameter);
        return diameter;
    }    
private:
    int maxDepth(TreeNode* root, int & diameter)
    {
        if(!root) {return 0;}

        int leftHeight=maxDepth(root->left,diameter);
        int rightHeight=maxDepth(root->right,diameter);
        diameter=max(diameter,leftHeight+rightHeight);
        
        return 1+max(leftHeight,rightHeight);
    }
};