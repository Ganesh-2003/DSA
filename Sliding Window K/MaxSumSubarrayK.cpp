https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = 0;
        int sum = 0;
        int maxSum = 0;
        
        while(j<n)
        {    
            sum = sum+arr[j];
            
            if(j-i+1 < k)
            {
                j++;
            }
            
            else if(j-i+1 == k)
            {
                maxSum = max(maxSum,sum);
                
                sum = sum-arr[i];
                i++;
                j++;
            }
        }
        
        return maxSum;
    }
};

