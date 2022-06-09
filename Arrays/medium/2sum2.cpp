// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int slow=0, f=0, fast=1;
        if(n[slow]+n[fast] == target)
            return {1,2};
        while(slow<n.size()){
            if(n[slow]==n[fast]){
                slow++;
                fast++;
                continue;
            }
            // cout<<"o";
            while( fast<n.size() and (n[slow]+ n[fast]) <= target)fast++;
                // cout<<"a";
            if(n[slow]+n[fast-1] == target){
                f=1;
                break;
            }
            fast = slow;
            ++slow;
        }
        if(f)
            return {slow+1,fast};
        return {};
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum = nums[i] + nums[j];
            if(sum==target) return {i+1,j+1};
            else if(sum>target) j--;
            else i++;
        }
        return {}; // Target not found
    }
};