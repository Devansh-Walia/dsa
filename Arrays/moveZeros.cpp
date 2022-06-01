/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //int top=0,bot=0;
        //while(top<nums.size()){
          //  if(nums[top]==0) top++;
            //else if(nums[top]!=0) swap(nums[top++],nums[bot++]);
        //}
        // m2
        // for(int slowptr = 0, cur=0;cur<nums.size();cur++){
        //     if(nums[cur] != 0){
        //         swap(nums[slowptr++], nums[cur]);
        //     }
        // }
        //m3
        int zero = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]!=0)
                nums[zero++] = nums[i];
            
        }
        
        for(int i = zero; i<nums.size(); i++)
            nums[i] = 0;
        
        
    }
};
