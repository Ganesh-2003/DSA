https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION

// Left Rotate Array by one place

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    vector<int> ans;

    int temp = arr[0];

    for(int i = 1;i<arr.size();i++)
    {
        ans.push_back(arr[i]);
    }

    ans.push_back(temp);
    return ans;
}

//Rotate Array by d places

class Solution {
    public:
  
      // Function to rotate an array by d elements in counter-clockwise direction.
      void rotateArr(vector<int>& arr, int d) {
          // code here
          vector<int> temp;
          int n = arr.size();
          d = d%n;
          
          for(int i = 0;i<d;i++)
          {
              temp.push_back(arr[i]);
          }
          
          for(int i = d;i<arr.size();i++)
          {
              arr[i-d] = arr[i];
          }
          
          int j = 0;
          
          for(int k = n-d;k<arr.size();k++)
          {
              arr[k] = temp[j];
              j++;
          }
      }
  };


  //Another Method

  class Solution {
    public:
 
    // Function to rotate an array by d elements in counter-clockwise direction.
     void rotateArr(vector<int>& arr, int d) {
         // code here
         int n = arr.size();
         reverse(arr,arr+d);
         reverse(arr+d,arr+n);
         reverse(arr,arr+n);
     }
 };
