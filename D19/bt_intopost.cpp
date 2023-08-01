class Solution {
public:
    
    // i will point on post array and it will give the root of the tree
    
    int i;
    
    // function for finding the position of the val in inorder array
    
    int search(vector<int>& in, int start, int end, int val)
    {
        for(int i = start; i <= end; i++)
        {
            if(in[i] == val)
            {
                return i;
            }
        }
        
        return -1;
    }
    
    // recursive function for contructing binary tree
    
    TreeNode* construct(vector<int>& post, int start, int end, vector<int>& in)
    {
        // base case
        
        if(start > end)
        {
            return NULL;
        }
        
        // find the root_val
        
        int val = post[i];
        
        // decrement i
        
        i--;
        
        // search the position of val in inorder array, so that we can create right and left subtree
        
        int idx = search(in, start, end, val);
        
        // create root node
        
        TreeNode* root = new TreeNode(val);
        
        // create right subtree
        
        root -> right = construct(post, idx + 1, end, in);
        
        // create left subtree
        
        root -> left = construct(post, start, idx - 1, in);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        
        int n = in.size();
        
        // initialize i
        
        i = n - 1;
        
        return construct(post, 0, n - 1, in);
    }
};




