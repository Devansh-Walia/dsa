/*
https://leetcode.com/problems/implement-strstr/
Implement strStr().

Given two strings needle and haystack, return the index of the 
first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great 
question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. 
This is consistent to C's strstr() and Java's indexOf().
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0 || (needle == haystack))return 0;
        int found = haystack.find(needle);
        return (found != string::npos)?found:-1;
    }
};


//0ms
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        int j=0;
        for(int i=0;i<n;i++){
            while(haystack[i+j] == needle[j] && j<m){
                if(j==m-1)return i;
                j++;
            }
            j=0;
        }
        return -1;
    }
};