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
    int height(TreeNode* rt){
        if(!rt) return 0;
        return 1+max(height(rt->left) , height(rt->right));
    }
public:
    int maxi=INT_MIN;
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        maxi = max(maxi, (lh + rh));
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return maxi;
    }
};
