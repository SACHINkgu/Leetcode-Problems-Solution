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
    pair<bool, int> fastCalc(TreeNode* root) {
        if(root == nullptr) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<bool, int> left = fastCalc(root -> left);
        pair<bool, int> right = fastCalc(root -> right);
        
        bool leftAns = left.first; bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) ans.first = true;
        else ans.first = false;
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        return fastCalc(root).first; 
    }
};