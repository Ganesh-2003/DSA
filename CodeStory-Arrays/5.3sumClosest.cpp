
https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        
        for(int i = 0;i<nums.size()-2;i++)
        {
            int low = i+1;
            int high = nums.size()-1;

            while(low<high)
            {
                int curSum = nums[low] + nums[high] + nums[i];

                if(curSum == target)
                {
                    return curSum;
                }

                if(abs(target-curSum)<abs(target-closest))
                {
                    closest = curSum;
                }

                else if(curSum > target)
                {
                    high --;
                }
                else{
                    low++;
                }
            }
        }

        return closest;
    }
};