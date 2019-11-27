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
    int maxDepth(TreeNode* root) {
        return maxDepthHelper(root, 0);     
    }
    
    int maxDepthHelper(TreeNode* root, int depth){
        if(root == nullptr){
            return depth;
        }
        else{
            return max(maxDepthHelper(root->left, depth + 1), maxDepthHelper(root->right, depth + 1));
        }
    }
};