No problem link found: https://www.geeksforgeeks.org/count-number-of-substrings-with-exactly-k-distinct-characters/

class Solution {
    public:
        int countSubstringAtmostK(string s) {
            
            int n = s.size();
            int i = 0;
            int j = 0;
    
            unordered_map<char,int> mp;
            int ans = 0;
            int distinct = 0;

            while(j<n)
            {   
                mp[s[j]]++;

                while(mp.size() > 2)
                {
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)
                    {
                        mp.erase(s[i]);
                    }

                    i++;
                }

                ans += j-i+1;
                j++;
                
            }
            return ans;
        }
    };