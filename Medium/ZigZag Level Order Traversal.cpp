**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void zigzagTraversalHelper(TreeNode* n, int level, vector<vector<int>>& v){
	if(n!=nullptr){
		if(level >= v.size()){
			v.push_back(vector<int>{n->val});
		}
		else{
            if(level % 2 == 0){
			    v[level].push_back(n->val);
            }
            else{
                v[level].insert(v[level].begin(),n->val);
            }
		}
		zigzagTraversalHelper(n->left, level + 1, v);
		zigzagTraversalHelper(n->right, level + 1, v);
	}
}

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        zigzagTraversalHelper(root,0,v);
        return v;
    }
};
    