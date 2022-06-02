/* https://leetcode.com/problems/transpose-matrix/ */

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<int>> res(c,vector<int> (r,0)); 
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[j][i] = matrix[i][j];
            }
        }
        return res;
        
    }
};

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int> > ans;
        for(int i=0;i<matrix[0].size();i++){
            vector<int> v;
            for(int j=0;j<matrix.size();j++){
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};