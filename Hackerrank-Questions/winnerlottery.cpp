
 struct TreeNode {
     int val;
     TreeNode *left;
    TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        return inorderTraversal(root->left);
        v.push_back(root->val);
        return inorderTraversal(root->right);
        return v;
    }
};