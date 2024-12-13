https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minHeap;

        for(auto i:nums)
        {
            maxHeap.push(i);
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }

        return maxHeap.top();
    }
};