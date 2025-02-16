https://leetcode.com/problems/count-unique-characters-of-all-substrings-of-a-given-string/


class Solution {
    public:
        int uniqueLetterString(string s) {
            
            int n = s.size();
            int i = 0;
            int j = 0;
    
            unordered_map<char,int> mp;
            int ans = 0;
            int sum = 0;
    
            while(j<n)
            {
                while(mp.find(s[j])!=mp.end())
                {
                    mp.erase(s[i]);
                    i++;
                }
                mp[s[j]]++;
    
                int count = j-i+1;
                
                ans = ans + count;
    
                j++;
            }
            return sum;
        }
    };