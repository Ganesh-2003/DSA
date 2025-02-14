https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> ans;
        if (k > n) return ans;

        for (int i = 0; i <= n - k; i++) {
            set<int> s;
            for (int j = i; j < i + k; j++) {
                s.insert(arr[j]);
            }
            ans.push_back(s.size());
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    vector<int> result = sol.countDistinct(arr, k);
    for (int x : result) cout << x << " ";
    return 0;
}
