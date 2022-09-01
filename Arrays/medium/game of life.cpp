class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> tempBoard = board;
        for(int i=0; i<board.size();i++){
            for(int j=0;j<board[0].size(); j++){
                int c = deadOrAlive(tempBoard, i, j);
                if(board[i][j]){
                    if(c<2 || c>3)board[i][j] =0;
                }
                else
                    if(c==3)board[i][j]=1;
            }
        }
    }
    int getScore(vector<vector<int>>& board, int i, int j){
        if( i< 0 || j< 0 || j> board[0].size()-1 || i>board.size()-1)return 0;
        return board[i][j];
    }
    int deadOrAlive(vector<vector<int>>& board, int posi, int posj){
        int score = 0;
        score =  getScore(board, posi-1, posj)+
            getScore(board, posi+1, posj)+
            getScore(board, posi, posj-1)+
            getScore(board, posi, posj+1)+
            getScore(board, posi-1, posj-1)+
            getScore(board, posi-1, posj+1)+
            getScore(board, posi+1, posj-1)+
            getScore(board, posi+1, posj+1);
        return score;
    }
};