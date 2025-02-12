Problem Name : countSubarrWithEqualZeroAndOne

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        
        long long int prefixSum = 0;
        long long int ans = 0;
        
        mp[0] = -1;
        
        for(int i = 0;i<n;i++)
        {
            
            if(arr[i] == 0)
            {
                arr[i] = -1;
            }
            
            prefixSum = prefixSum + arr[i];
            
            if(mp.find(prefixSum)!=mp.end())
            {
                ans = ans + mp[prefixSum];
                mp[prefixSum]++;
            }
            else
            {
                mp[prefixSum] = 1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
