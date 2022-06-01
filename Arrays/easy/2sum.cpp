// method 1 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            for(int j=i+1; j<n;j++){
                if(nums[i]+nums[j] == k)
                    ans.push_back(i), ans.push_back(j);
            }
        }
        return ans;
    }
};

//method 2

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(k-nums[i]) != m.end()){
                ans.push_back(i);
                ans.push_back(m[k-nums[i]]);
                return ans;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};
