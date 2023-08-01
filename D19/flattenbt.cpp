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
    void flatten(TreeNode* root) {
        go(root);
    }

    pair<TreeNode*, TreeNode*> go(TreeNode* root){
        if(!root){
            return {root, root};
        }
        if(!root->left && !root->right){
            return {root, root};
        }

        pair<TreeNode*, TreeNode*> left = go(root->left);
        pair<TreeNode*, TreeNode*> right = go(root->right);
        
        TreeNode *headl = left.first;
        TreeNode *headr = right.first;
        TreeNode *taill = left.second;
        TreeNode *tailr = right.second;

        if(!root->left){
            root->right = headr;
            return {root, tailr};
        }
        root->left = NULL;

        if(!headr){
            root->right = headl;
            return {root, taill};
        }else{
            root->right = headl;
            taill->right = headr;
            return {root, tailr};
        }    
    }
};