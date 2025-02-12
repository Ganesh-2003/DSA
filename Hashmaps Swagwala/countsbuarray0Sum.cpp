

#include <bits/stdc++.h> 
int countSubarrays(int n, vector<int> &arr){
    // Write your code here.

    unordered_map <int,int> mp;
    int prefixSum = 0;
    int maxLen = 0;
    int count = 0;
    mp[0] = 1;

    for(int i = 0;i<arr.size();i++)
    {
        prefixSum = prefixSum + arr[i];

        if(mp.find(prefixSum) != mp.end())
        {
            count = count + mp[prefixSum];
            mp[prefixSum]++;
        }

        else
        {
            mp[prefixSum] = 1;
        }
    }
    return count;
    
}