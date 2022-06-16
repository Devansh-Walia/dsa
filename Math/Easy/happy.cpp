// https://leetcode.com/problems/happy-number/submissions/

class Solution {
public:
    bool isHappy(int n) {
        while(n>=10){
            int sum = 0;
            while(n){
                int x = n%10;
                sum+= x*x;
                n/=10;
            }
            n = sum;                
        }
        if(n == 1 || n ==7) return true;
        return false;
    }
};