https://www.geeksforgeeks.org/problems/second-largest3735/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          // Code Here
          int firstLargest = 0;
          int secondLargest = -1;
          
          for(int i = 0;i<arr.size();i++)
          {
              if(arr[i]>firstLargest)
              {
                  secondLargest = firstLargest;
                  firstLargest = arr[i];
              }
              
              if(arr[i]<firstLargest && arr[i]>secondLargest)
              {
                  secondLargest = arr[i];
              }
          }
          
          if(secondLargest == 0)
          {
              return -1;
          }
          else
          {
              return secondLargest;
          }
          
          
      }
  };