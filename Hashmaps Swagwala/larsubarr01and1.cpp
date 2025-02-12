class Solution {
    public:
      int maxLen(vector<int> &arr) {
          // Your code here
          unordered_map<int,int> mp;
      
          int ans = 0;
          int prefixSum = 0;
          
          mp[0] = -1;
          
          for(int i =0;i<arr.size();i++)
          {
              if(arr[i] == 0)
              {
                  arr[i] = -1;
              }
              
              prefixSum = prefixSum + arr[i];
              
              
              if(mp.find(prefixSum)!=mp.end())
              {
                  ans = max(ans,i-mp[prefixSum]);
              }
              else
              {
                  mp[prefixSum] = i;
              }
          }
          
          return ans;

      }
  };