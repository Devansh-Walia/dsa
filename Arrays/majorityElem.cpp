/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return nums[0];
        int maxc = 0,max;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int c=0;
            while(i+1<n&&nums[i] == nums[i+1]){i++;c++;}
            if(maxc<c){maxc=c;max=nums[i];}
        }
        return max;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i:nums)
            m[i]++;
        int max=0, maxc=0;
        for(auto i:m){
            // cout<<i.first<<"--"<<i.second<<endl;
            if(i.second>maxc){
                max = i.first;
                maxc = i.second;
            }
        }
        return max;
    }
};
