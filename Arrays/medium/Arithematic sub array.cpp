//https://leetcode.com/problems/arithmetic-subarrays/submissions/

class Solution {
public:
    vector<int> slicing(vector<int>& arr,int X, int Y){
        auto start = arr.begin() + X;
        auto end = arr.begin() + Y + 1;
        vector<int> result(Y - X + 1);
        copy(start, end, result.begin());
        return result;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            auto n = slicing(nums, l[i], r[i]);
            sort(n.begin(), n.end());
            int diff = INT_MAX;
            int f=1;
            for(int i=0;i< n.size()-1; i++){
                if(diff==INT_MAX)
                    diff = n[i+1]-n[i];
                else if(n[i+1]-n[i]!=diff){
                    f=0;
                    break;
  
                }
            }
            ans.push_back(f);
        }
        return ans;
    }
};


class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            vector<int> n;
            n.assign(nums.begin() + l[i],nums.begin() + r[i] + 1);
            sort(n.begin(), n.end());
            int diff = INT_MAX;
            int f=1;
            for(int i=0;i< n.size()-1; i++){
                if(diff==INT_MAX)
                    diff = n[i+1]-n[i];
                else if(n[i+1]-n[i]!=diff){
                    f=0;
                    break;
  
                }
            }
            ans.push_back(f);
        }
        return ans;
    }
};

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size(), true);
        for(int i=0;i<l.size();i++){
             if (r[i] - l[i] == 1) {
                continue;
            }
            vector<int> n(nums.begin() + l[i], nums.begin() + r[i] + 1);
            sort(n.begin(), n.end());
            for (int j = 2; j < n.size(); ++j) {
                if (n[j] - n[j - 1] != n[1] - n[0]) {
                    ans[i] = false;
                    break;
                }
            }
        }
        return ans;
    }
};