class Solution {
public:
    TreeNode* buildTree(const vector<int>& preorder, const vector<int>& inorder) {
        if (preorder.empty()) return NULL;

        TreeNode* root = new TreeNode(preorder[0]);

        int i = 0;
        while (inorder[i] != preorder[0]) i++;

        root->left = buildTree(
            vector<int>(preorder.begin() + 1, preorder.begin() + 1 + i),
            vector<int>(inorder.begin(), inorder.begin() + i)
        );

        root->right = buildTree(
            vector<int>(preorder.begin() + 1 + i, preorder.end()),
            vector<int>(inorder.begin() + i + 1, inorder.end())
        );

        return root;
    }
};