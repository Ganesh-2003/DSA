GFG: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

class Solution {
    public:
      int longestKSubstr(string &s, int k) {
          // your code here
          int i = 0;
          int j = 0;
          int n = s.size();
          unordered_map<int,int> mp;
          int ans = -1;
          while(j<n)
          {
              mp[s[j]]++;
              
              if(mp.size() == k)
              {
                    ans = max(ans,j-i+1);
              }
              
              while(mp.size()>k)
              {
                  mp[s[i]]--;
                  if(mp[s[i]] == 0)
                  {
                      mp.erase(s[i]);
                  }
                  i++;
              }
              j++;
          }
          return ans;
      }
  };
