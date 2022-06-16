// https://leetcode.com/problems/diameter-of-binary-tree/submissions/

class Solution {
public:
    int solve(TreeNode *root, int &dia){
        
        if(root == nullptr)
            return 0;
        int left = solve(root->left, dia);
        int right = solve(root->right, dia);
        dia = max(left+right, dia);
        return max(left, right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia =0;
        solve(root, dia);
        return dia;
    }
};