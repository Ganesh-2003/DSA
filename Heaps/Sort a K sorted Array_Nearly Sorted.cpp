https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        
        priority_queue<int,vector<int>,greater<int>> pq; //minHeap
        vector<int> ans;
        
        for(int i = 0;i<arr.size();i++)
        {
            pq.push(arr[i]);
            
            if(pq.size()>k)
            {
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        
        while(pq.size()!=0)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        for(int i = 0;i<ans.size();i++)
        {
            arr[i] = ans[i];
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        obj.nearlySorted(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends