// https://leetcode.com/problems/add-to-array-form-of-integer/submissions/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       vector<int> ans;
        int i = num.size()-1;
        while(i>=0 || k >0){
            if(i>=0)
                k+=num[i];
            ans.push_back(k%10);
            k/=10;
            i--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0,i=num.size()-1;
        while(i>=0){
            num[i]=num[i]+k%10+carry;
            carry=num[i]/10;
            num[i]%=10;
            k/=10;
            i--;
        }
        while(k>0 || carry>0){
            int sum=carry+k%10;
            carry=sum/10;
            sum%=10;
            k/=10;
            num.insert(num.begin(),sum);
        }
        
        return num;
    }
};