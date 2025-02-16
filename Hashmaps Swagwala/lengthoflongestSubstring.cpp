LeetCode :https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {

    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<int,int> mp;
    
            int n = s.size();
            int i = 0;
            int j = 0;
            int ans = 0;
    
            while(j<n)
            {
                while(mp.find(s[j])!=mp.end())
                {
                    mp.erase(s[i]);
                    i++;
                }
    
                mp[s[j]] = j;
    
                ans = max(ans, mp[s[j]] - mp[s[i]] + 1);
                j++;
            }
            return ans;
        }
    };