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
    private:
    int heights(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int l=heights(root->left);
        int r=heights(root->right);
        return 1+max(l,r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int left = diameterOfBinaryTree(root->left);
        int right =diameterOfBinaryTree(root->right);
        int both= heights(root->left)+heights(root->right);
        return max(left,max(right,both));
    }
};
