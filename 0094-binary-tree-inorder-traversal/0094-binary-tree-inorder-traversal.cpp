class Solution {
public:
vector<int>ans;

void inOrder(TreeNode* root){
    if(root==NULL){
        return ;
    }
    inOrder(root->left);
    ans.push_back(root->val);
    inOrder(root->right);
}
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return ans;
    }
};