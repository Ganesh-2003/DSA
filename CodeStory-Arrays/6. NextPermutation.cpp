Next Permutation - https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int pivot_index = -1;

        for(int i = n-1;i>0;--i)
        {
            if(nums[i-1]<nums[i])
            {
                pivot_index = i-1;
                break;
            }
        }

        if(pivot_index == -1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }

        for(int i = n-1 ; i > pivot_index ; --i)
        {
            if(nums[i]>nums[pivot_index])
            {
                swap(nums[i],nums[pivot_index]);
                break;
            }
        }

        reverse(nums.begin() + pivot_index +1,nums.end());

        return ;
    }
};