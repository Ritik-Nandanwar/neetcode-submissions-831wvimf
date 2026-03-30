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
    int travel(TreeNode* root){
        if(!root){
            return 0;
        }
        // if(root->left){
            int left = travel(root->left);
        // }
        // if(root->right){
            int right = travel(root->right);
        // }
        // return (root->left ? return travel(root->left, ans+=1) : ;
        return 1+max(right,left);
    }
public:
    int maxDepth(TreeNode* root) {
        return travel(root);
    }
};
