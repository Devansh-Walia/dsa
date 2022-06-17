// https://leetcode.com/problems/subtree-of-another-tree/submissions/

// idea -> here we look at the tree from the start check if it is same as that of the subtree, 
// if not we move to the right sub tree and see if it matches the subtree 
// else we move to left.  


class Solution {
public:
    bool check(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot)return true;
        else if(!root || !subRoot)return false;
        return root->val == subRoot->val && check(root->right, subRoot->right) && check(root->left, subRoot->left);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root || !subRoot)return false;
        return check(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};


// same concept but faster execution

class Solution {
public:
    bool check(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot)return 1;
        else if(!root || !subRoot)return 0;
        if(root->val != subRoot->val)return 0;
        return check(root->right, subRoot->right) && check(root->left, subRoot->left);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root || !subRoot)return 0;
        if(check(root, subRoot) )return 1;
        return  isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};