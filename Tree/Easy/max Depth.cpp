//https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1+max(left,right);
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return !root?0: 1+ max(maxDepth(root->left), maxDepth(root->right));
    }
};