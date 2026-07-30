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
    int goodNodes(TreeNode* root) {
        int ans=0;
        if(!root){
            return ans;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,root->val});
        // int value=root->val;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto[temp,value]= q.front();
                q.pop();
               
                if(value<=temp->val) ans++;
                int maxval=max(value,temp->val);         
                if(temp->left) q.push({temp->left,maxval});
                if(temp->right) q.push({temp->right,maxval});
            }
        }
         return ans;
    }
};
