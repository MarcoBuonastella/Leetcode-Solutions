/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void kthSmallestHelper(TreeNode* root, vector<int>& v){
         if (root != nullptr){
             kthSmallestHelper(root->left, v);
             v.push_back(root->val);
             kthSmallestHelper(root->right, v); 
         }
    }

class Solution {
public:
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inOrderTraversal;
        kthSmallestHelper(root, inOrderTraversal);
        return inOrderTraversal[k - 1];
    }
};