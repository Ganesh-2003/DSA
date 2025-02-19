17. Largest subarray sum equal to k (Variation of above, just find the largest)
https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


class Solution {
    public:
      int longestSubarray(vector<int>& arr, int k) {
          // code here
          unordered_map<int,int> mp;
          
          int prefixSum = 0;
          int ans = 0;
          mp[0] = -1;
          
          for(int i = 0;i<arr.size();i++)
          {
              prefixSum = prefixSum + arr[i];
              
              int target = prefixSum - k;
              
              if(mp.find(target) != mp.end())
              {
                  ans = max(ans,i-mp[target]);
              }
              
              if(mp.find(prefixSum) == mp.end())
              {
                  mp[prefixSum] = i;
              }
          }
          
          return ans;
      }
  };