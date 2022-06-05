/*
https://leetcode.com/problems/add-strings/submissions/
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any
built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.
*/

class Solution {
public:
    string addStrings(string n1, string n2) {
        int carry = 0;
        string big, small;
        if(n1.size()>n2.size())
            big = n1, small=n2;
        else
            big = n2, small = n1;
        int n = big.size()-1, m = small.size()-1;
        while(n>=0 && m>=0){
            int c = big[n]- '0';
            int d = small[m]- '0';
            int sum = c+d + carry;
            
            int dig = sum%10;
            carry = sum/10;
            // cout<< big<< "==" <<n <<small <<m << "{}" << sum <<"====" << dig << "--"<< carry <<endl;
            big[n] = '0'+dig;
            
            --n,--m;
        }
        while(n>=0){
            int sum = carry + (big[n] -'0');
            int dig = sum%10;
            carry = sum/10;
            big[n] = '0'+dig;
            --n;
        }
        if(carry){
            string s(1, '0'+carry);
            big = s.append(big);
        }
        return big;
    }
};
