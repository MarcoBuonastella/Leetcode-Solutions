**
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

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        stack<int> branchStack;
        stack<TreeNode*> parentStack;
        TreeNode* curr = root;
        
        bool popped = 0;
        parentStack.push(NULL);
        
        while(curr){
            
            if(popped){
                int branch = branchStack.top();
                branchStack.pop();
                if(branch == 0 && !curr->right || branch == 1){
                     curr = parentStack.top();
                     parentStack.pop();
                }
                else {
                    branchStack.push(1);
                    parentStack.push(curr);
                    curr = curr->right;
                    popped = 0;
                }
                
            }
            else{
                vec.push_back(curr->val);
                if(curr->left){
                    parentStack.push(curr);
                    branchStack.push(0);
                    curr = curr->left;   
                }
                else if(curr->right){
                    parentStack.push(curr);
                    branchStack.push(1);
                    curr = curr->right;    
                }
                else{
                    curr = parentStack.top();
                    parentStack.pop();
                    popped = 1;
                }
                
            }
        }
        return vec;

    }
};