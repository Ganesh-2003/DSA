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
