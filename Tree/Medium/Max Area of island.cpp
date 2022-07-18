//https://leetcode.com/problems/max-area-of-island/

//recursive
class Solution {
public:
    vector<vector<int>>grid;
    int n=0;
    int m =0;

    
    int search( int i, int j){
        if(i<0 || j<0 || i>=n || j>=m ||  grid[i][j]==0)return 0;
        grid[i][j] = 0;
         return 1+ search(i-1, j) +
                search( i+1, j)+
            search( i, j-1) + 
            search( i, j+1);
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int maxA= 0;
        grid = g;
        n =grid.size(), m = grid[0].size();
        for(int i=0;i<n; i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    maxA = max(search(i, j), maxA);
            }
        }
        return maxA;
    }
};


//iterative

