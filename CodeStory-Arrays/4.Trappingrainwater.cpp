Trapping Rain Water: https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int> left(n);
        vector<int> right(n);

        int res = 0;

        left[0] = height[0];

        for(int i = 1;i<height.size();i++)
        {
            left[i] = max(left[i-1],height[i]);
        }

        right[n-1] = height[n-1];

        for(int i = n-2;i<height.size();i--)
        {
            right[i] = max(right[i+1],height[i]);
        }

        int ans = 0;

        for(int i = 1;i<height.size();i++)
        {
            int cnt = min(left[i],right[i]) - height[i];
            ans = ans+cnt;
        }

        return ans;
    }
};