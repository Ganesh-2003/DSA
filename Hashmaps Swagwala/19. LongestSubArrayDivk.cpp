https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


class Solution {
    public:
      int longestSubarrayDivK(vector<int>& arr, int k) {
          // Complete the function
          
          unordered_map<int,int> mp;
          long long prefixSum = 0;
          int ans = 0;
          mp[0] = -1;
          for(int i = 0;i<arr.size();i++)
          {
              prefixSum = prefixSum + arr[i];
              int target = ((prefixSum % k)+k)%k;
              
              if(mp.find(target)!=mp.end())
              {
                  ans = max(ans,i - mp[target]);
              }
              else
                  mp[target] = i;
          }
          return ans;
      }
  };