/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int start, int end, int &preOrderInd){
    if(start > end){
        return nullptr;
    }
    
    TreeNode* node = new TreeNode(preorder[preOrderInd]);
    preOrderInd++;
    
    if(start == end){
        return node;
    }
    
    int inorderIndex = 0;
    
    for(int i = start; i <= end; i++){
        if(inorder[i] == preorder[preOrderInd - 1]){
           inorderIndex = i; 
        }
    }
    
    
    node->left = buildTreeHelper(preorder, inorder,start, inorderIndex - 1, preOrderInd);
    node->right = buildTreeHelper(preorder, inorder,inorderIndex + 1, end, preOrderInd);
    return node;
}
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex = 0;
        return buildTreeHelper(preorder, inorder, 0, inorder.size() - 1, preOrderIndex);            
    }
};