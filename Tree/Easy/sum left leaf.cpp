// https://leetcode.com/problems/sum-of-left-leaves/

class Solution {
public:
    void help(TreeNode* root, int &sum , bool isLeft){
        if(!root)return;
        if(isLeft && !root->left &&!root->right)sum+=root->val;
        if(root->right)help(root->right, sum, false);
        if(root->left)help(root->left, sum, true);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        help(root,sum, false);
        return sum;
    }
}; // 0ms