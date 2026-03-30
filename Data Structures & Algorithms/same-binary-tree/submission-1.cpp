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
    bool travel(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if((!p && q) || (p && !q)) return false;
        if((p->left && !q->left) || (p->right && !q->right)){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        return travel(p->left, q->left) && travel(p->right , q->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return travel(p, q);
    }
};
