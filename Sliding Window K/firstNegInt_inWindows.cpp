https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

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
                  q.push(arr[j]);
              }
              
              if(j-i+1<k)
              {
                  j++;
              }
              else if(j-i+1==k)
              {
                  if(q.empty())
                  {
                      res.push_back(0);
                  }
                  else{
                  int ele = q.front();
                  res.push_back(ele);
                  }
                  if(!q.empty() && arr[i] == q.front())
                  {
                      q.pop();
                  }
                  
                  i++;
                  j++;
              }
          }      
          return res;
      }
  };