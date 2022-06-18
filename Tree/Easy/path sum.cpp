//https://leetcode.com/problems/path-sum/submissions/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)return true;
        if(!p)return false;
        if(!q)return false;
        if(p->val != q->val)return false;
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
    }
};


class Solution {
public:
    bool isLeaf(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
            return true;
        return false;
    }
    bool solve(int sum,TreeNode* root, int targetSum)
    {
       if(root==NULL)
           return false;
        if(isLeaf(root) && sum+root->val == targetSum)
            return true;
        return solve(sum+root->val,root->left,targetSum) | solve(sum+root->val,root->right,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(0,root,targetSum);
    }
};