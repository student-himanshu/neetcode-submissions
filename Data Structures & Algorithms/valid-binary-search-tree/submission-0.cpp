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
    bool valid(TreeNode* root,int minval,int maxval){
        if(!root){
            return true;
        }
        if(root->val<=minval || root->val>=maxval) return false;
        return valid(root->left,minval,root->val)&& valid(root->right,root->val,maxval);

    }
public:
    bool isValidBST(TreeNode* root) {
        return valid(root,INT_MIN,INT_MAX);
    }
};
