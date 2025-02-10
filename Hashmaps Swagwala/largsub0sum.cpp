class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here 
        unordered_map<int,int> mp;
        int prefixSum = 0;
        int ans = 0;
        mp[0] = -1;
        
        for(int i=0;i<arr.size();i++)
        {
            prefixSum = prefixSum + arr[i];
            
            if(mp.find(prefixSum) != mp.end())
            {
                ans = max(ans, i - mp[prefixSum]);
            }
            else
            {
                mp[prefixSum] = i;
            }
        }
        
        return ans;
    }
};