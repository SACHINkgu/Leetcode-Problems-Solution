class Solution {
private:
    int maxPathSumHelper(TreeNode* root, int& res) {
        if (root == nullptr) {
            return 0;
        }
        
        int leftSum = maxPathSumHelper(root->left, res);
        int rightSum = maxPathSumHelper(root->right, res);
        
        int maxChildSum = max(leftSum, rightSum);
        
        int maxRootSum = max(maxChildSum + root->val, root->val);
        int maxTreeSum = max(maxRootSum, leftSum + rightSum + root->val);
        
        res = max(res, maxTreeSum);
        
        return maxRootSum;
    }
    
public:
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        maxPathSumHelper(root, res);
        return res;
    }
};