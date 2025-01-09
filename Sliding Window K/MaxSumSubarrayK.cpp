https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int i = 0;
        int j = 0;
        
        int n = arr.size();
        vector<int> res;
        queue<int> q;
        while(j<n)
        {
            if(arr[j]<0)
            {
                q.push_back(arr[j]);
            }
            
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                
                i++;
                j++;
            }
        }
    }
};
