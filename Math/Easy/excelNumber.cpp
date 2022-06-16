//https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    string convertToTitle(int n) {
        string answer = "";
        while(n){
            n--;
            int r= n%26;
            char c = ('A'+r);
            answer= c+answer ;
            n/=26;
        }
        return answer;
    }
};