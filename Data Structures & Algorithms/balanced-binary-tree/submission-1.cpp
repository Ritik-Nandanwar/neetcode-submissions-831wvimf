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
    bool travel(TreeNode* root){
        if(!root) return true;
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh) > 1){
            cout<<"lh => "<<lh<<"rh => "<<rh<<endl;
            return false;
        }
        // else{
        //     if(root->left) travel(root->left);
        //     if(root->right) travel(root->right); 
        // }
        return travel(root->left) && travel(root->right);
    }
public:
    bool isBalanced(TreeNode* root) {
        return travel(root);
    }
};
