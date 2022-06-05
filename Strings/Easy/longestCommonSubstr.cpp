/*
https://leetcode.com/problems/longest-common-prefix/

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int j =0;j<strs[0].size();j++){
            for(int i=1;i<strs.size();i++){
                if(strs[i][j] != strs[0][j])
                    return ans;
            }
            ans+=strs[0][j];
        }
        return ans;
    }
};


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)return "";
        return lcp(strs, 0, strs.size()-1);
    }
    string lcp(vector<string> s, int left, int right){
        if(left == right)
            return s[left];
        else{
            int mid = (left+right)/2;
            string l = lcp(s, left, mid);
            string r = lcp(s,mid+1, right);
            return common(l,r);
        }
    }
    string common(string l, string r){
        int lim = min(l.size(), r.size());
        string ans = "";
        for(int i=0;i<lim;i++){
            if(l[i]!=r[i])
                return ans;
            ans+=l[i];
        }
        return ans;
    }
};