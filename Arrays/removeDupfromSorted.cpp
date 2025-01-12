https://leetcode.com/problems/remove-duplicates-from-sorted-array/

//Using Sets

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            set<int> s;
    
            for(auto i:nums)
            {
                s.insert(i);
            }
            
            int index = 0;
            for(auto i:s)
            {
                nums[index] = i;
                index++;
            }
            return index;
        }
};

//Using 2 pointers

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i = 0;
    
            for(int j = 1;j<nums.size();j++)
            {
                if(nums[j]!=nums[i])
                {
                    nums[i+1] = nums[j];
                    i++;
                }
            }
            return i+1;
        }
    };

