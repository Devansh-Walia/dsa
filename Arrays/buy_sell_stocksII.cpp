/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. 
You can only hold at most one share of the stock at any time.
However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.
*/

class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int currmax = pr.back(), currmin = pr.back(), res=0;
        for(int i= pr.size()-2; i>=0;i--){
            if(pr[i]> pr[i+1]){
                res+= currmax-currmin;
                currmin = currmax = pr[i];
            }
            else if(currmax < pr[i])
                currmax = pr[i];
            else
                currmin = pr[i];
        }
        res+= currmax - currmin;
        return res;
    }
};



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0,n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1])res=res+prices[i]-prices[i-1];
        }
        return res;
    }
};
