https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution { 
    public:
      bool arraySortedOrNot(vector<int>& arr) {
          // code here
          
          bool flag = true;
          
          for(int i = 1;i<arr.size();i++)
          {
              if(arr[i-1]>arr[i])
              {
                  flag = false;
              }
          }
          return flag;
      }
  };