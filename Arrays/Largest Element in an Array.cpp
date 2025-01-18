Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


class Solution {
    public:
      int largest(vector<int> &arr) {
          // code here
          int res = INT_MIN;
          
          for(int i = 0;i<arr.size();i++)
          {
              if(arr[i]>res)
              {
                  res = arr[i];
              }
          }
          
          return res;
          
      }
  };
