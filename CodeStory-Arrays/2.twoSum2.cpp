https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int low = 0;
            int high = numbers.size()-1;
    
            while(low<high)
            {
                int value = numbers[low] + numbers[high];
    
                if(value == target) {
                    return {low+1,high+1};
                }
    
                else if(value<target) {
                    low++;
                }
                else {
                    high--;
                }   
            }
            return {-1,-1};
        }
    };