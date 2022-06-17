//https://leetcode.com/problems/symmetric-tree/submissions/

class Solution {
public:
    bool check(TreeNode *right, TreeNode* left){
        if(!right && !left)return 1;
        else if( !right || !left )return 0;
        else if( right->val != left->val)return 0;
        return check(right->right, left->left ) && check(right->left, left->right);
    }
    bool isSymmetric(TreeNode* root) {
     return check(root->right, root->left);   
    }
};

class Solution {
public:
    bool check(TreeNode *right, TreeNode* left){
        if(right && left){
            if(right->val!=left->val)return 0;
            return check(right->right, left->left ) && check(right->left, left->right);
        }
        if( right || left )return 0;
        return 1;
    }
    bool isSymmetric(TreeNode* root) {
     return check(root->right, root->left);   
    }
};