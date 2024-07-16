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
    enum Found : int {None = 0, Start = 1, Dest = 2, Both = 3};
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        std::string startPath;
        std::string destPath;
        
        dfs(root, startValue, destValue, startPath, destPath);
        
        // dest path obtain by dfs is from dest node -> lca
        reverse(std::begin(destPath), std::end(destPath));
        
        return startPath + destPath;
    }
    
    Found dfs(TreeNode* root, int startValue, int destValue, string& startPath, string& destPath) {
        if (!root) {
            return Found::None;
        }
        
        Found curr = Found::None;
        
        if (root->val == startValue) {
            curr = Found::Start;
        } else if (root->val == destValue) {
            curr = Found::Dest;
        }
        
        Found lf = dfs(root->left, startValue, destValue, startPath, destPath);
        Found rt = dfs(root->right, startValue, destValue, startPath, destPath);
        
        if (lf == Found::Start || rt == Found::Start) {
            startPath.push_back('U');
        }
        
        if (lf == Found::Dest) {
            destPath.push_back('L');
        } else if (rt == Found::Dest) {
            destPath.push_back('R');
        }
        
        Found finding = Found(curr | lf | rt);
        
        return finding;
    }
};