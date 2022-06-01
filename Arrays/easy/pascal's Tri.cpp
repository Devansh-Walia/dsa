/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
https://leetcode.com/problems/pascals-triangle/

*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> result(numRows);
        for(int i=0;i<numRows;i++){
            vector<int> temp(i+1,1);
            for(int k=1;k<i;k++){
                temp[k]=result[i-1][k-1]+result[i-1][k]; //i-1 gives prev row 
            }
            result[i]=temp;
        }
        return result;
    }
};
