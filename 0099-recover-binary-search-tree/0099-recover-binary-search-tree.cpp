
class Solution {
public:
    vector<TreeNode*> nodes;

    void inorder(TreeNode* root) {
        if (root == NULL) return;

        inorder(root->left);
        nodes.push_back(root);
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);

        TreeNode* first = NULL;
        TreeNode* second = NULL;

        for (int i = 0; i < nodes.size() - 1; i++) {
            if (nodes[i]->val > nodes[i + 1]->val) {
                if (first == NULL) {
                    first = nodes[i];
                }
                second = nodes[i + 1];
            }
        }

        swap(first->val, second->val);
    }
};
