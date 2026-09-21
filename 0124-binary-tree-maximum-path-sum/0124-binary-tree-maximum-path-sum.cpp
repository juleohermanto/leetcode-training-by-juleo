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
    int res = INT_MIN;
    int check(TreeNode* node){
        if(node==nullptr){
            return 0;
        }
        int left = max(check(node->left), 0);
        int right = max(check(node->right), 0);
        int rn = node->val;
        res = max(res, left+ right+rn);
        return rn + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        check(root);
        return res;
    }
};