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
    int minDepth(TreeNode*root){
        if(root==nullptr)return 0;
        int minleft = minDepth(root->left);
        int minright = minDepth(root->right);
        return (minleft == 0 || minright ==0) ? minleft + minright + 1 : min(minleft, minright) +1;
    }
  

    
};