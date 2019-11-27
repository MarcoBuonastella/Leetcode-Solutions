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
    vector<int> inorderTraversal(TreeNode* root) {
        std::stack<TreeNode*> parents;
        vector<int> output;
        while(root!=nullptr || !parents.empty()){
            if(root == nullptr){
                root = parents.top();
                parents.pop();
                output.push_back(root->val);
                root = root->right;
            }
            else{
                parents.push(root);
                root = root->left;
            }
        }
        return output;
    }
};