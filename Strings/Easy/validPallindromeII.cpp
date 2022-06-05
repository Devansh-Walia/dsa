/*
https://leetcode.com/problems/valid-palindrome-ii/
Given a string s, return true if the s can
 be palindrome after deleting at most one character from it.
*/

class Solution {
public:
    bool validPalindrome(string s) {
        int front =0, back = s.size()-1;
        int cnt = 0;
        while(front<back){
            if(s[front] == s[back])
                ++front, --back;
            else{
                ++cnt,--back;
                if(cnt >1)break;
            }
        }
        front =0, back = s.size()-1;
        int cnt1=0;
        while(front<back){
            if(s[front] ==s[back])
                ++front, --back;
            else{
                ++cnt1,++front;
            }
            if(cnt1 >1)break;

        }
        if(cnt==1 || cnt1 == 1)return true;
        if(cnt==0 || cnt1 ==0)return true;
        return false;
    }
};


class Solution {
public:
    bool afterDel(string s, int front, int back){
        while(front<back){
            if(s[front]!=s[back])
                return false;
            else
                ++front, --back;
        }
        return true;
    }
    bool validPalindrome(string s) {
        ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        int front =0, back= s.size()-1;
        while(front<back){
            if(s[front] !=s[back]){
                return afterDel(s,front+1,back) || afterDel(s,front, back-1);
            }
            else
                ++front, --back;
        }
        return true;
    }
};
 