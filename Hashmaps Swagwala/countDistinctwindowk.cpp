Count distinct elements in every window K size

https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


//Fixed Size Sliding Window
class Solution {
    public:
      vector<int> countDistinct(vector<int> &arr, int k) {
          // code here.
          
           
          int n = arr.size();
          int i = 0;
          int j = 0;
          
          unordered_map<int,int> mp;
          vector<int> res;
          
          while(j<n)
          {
              
              mp[arr[j]]++;
              
              if(j-i+1 < k)
              {
                  j++;
              }
              
              else if(j-i+1 == k)
              {
                  int count = mp.size();
                  res.push_back(count);
                  
                  if(mp[arr[i]] == 1)
                  {
                      mp.erase(arr[i]);
                  }
                  else
                  {
                      mp[arr[i]]--;
                  }
                  
                  i++;
                  j++;
                  
              }
          }
          return res;
      }
  };