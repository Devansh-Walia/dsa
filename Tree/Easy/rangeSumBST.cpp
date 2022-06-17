// https://leetcode.com/problems/range-sum-of-bst/submissions/

// idea-> traverse the tree and sum when in range

class Solution {
public:
    int sum =0;
    void solve(TreeNode* root, int low, int high){
        if(!root)return;
        if(root->val>=low && root->val <=high)sum+=root->val;
        solve(root->right, low, high);
        solve(root->left, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        solve(root, low,high);
        return sum;
    }
};


//since it is a bst we can significantly reduce the traversals

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        
        int sum = root->val>=low && root->val<=high ? root->val :0;
        
        if(root->val < low)
            sum +=rangeSumBST(root->right, low, high);
        else if(root->val>high)
            sum+=rangeSumBST(root->left, low, high);
        else
            sum+=rangeSumBST(root->left,low,high) + rangeSumBST(root->right, low, high);
        root->right = root->left = NULL; // trim the tree to reduce time
        return sum;
    }
};