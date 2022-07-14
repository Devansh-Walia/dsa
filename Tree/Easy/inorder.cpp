//https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/

class Solution {
public:
    vector<int> ans;
    // Function to return a list containing the inorder traversal of the tree.
    
    void io(TreeNode* root){
        if(root==NULL)return;
        io(root->left);
        ans.push_back(root->val);
        io(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        io(root);
        return ans;
        
    }
};