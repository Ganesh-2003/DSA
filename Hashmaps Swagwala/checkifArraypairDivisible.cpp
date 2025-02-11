class Solution {
    public:
        bool canArrange(vector<int>& arr, int k) {
    
            unordered_map <int,int> mp;
    
            for(int i = 0;i<arr.size();i++)
            {
                int currentRem = (arr[i] % k + k)%k;
                mp[currentRem]++;        
            }
    
            for(int i=0;i<arr.size();i++)
            {
                int remainder = (arr[i] % k + k) % k;
    
                if(remainder == 0) 
                {
                    if(mp[remainder] % 2 != 0)
                    {
                        return false;
                    }
                }
                else if (mp[remainder] != mp[k-remainder])
                {
                    return false;
                }
            }
            return true;
        }
    }