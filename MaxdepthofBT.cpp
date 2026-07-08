class solution
{
    public:
    int maxDepth(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        return max(maxDeapth(root->left), maxDepth(root->right)) + 1;
    }
};