// GeeksforGeeks (practice): https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1
// GeeksforGeeks (article):  https://www.geeksforgeeks.org/dsa/count-of-subsets-with-given-difference/
// Problem: Count the number of ways to partition the array into two subsets such that
// the difference of their sums is equal to the given value `diff`.

#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
  public:
    int countPartitions(vector<int>& arr, int diff) {
        int totalSum = 0;
        for (auto i : arr)
            totalSum = totalSum + i;

        // If this is negative or odd, no valid partition exists
        if (totalSum - diff < 0 || (totalSum - diff) % 2 != 0)
            return 0;

        int targetSum = (totalSum - diff) / 2;
        unordered_map<string, int> mp;
        return totalPartitions(arr, targetSum, 0, mp);
    }

    int totalPartitions(vector<int>& arr, int targetSum, int currentIndex,
                        unordered_map<string, int>& mp) {

        if (currentIndex == arr.size()) {
            if (targetSum == 0)
                return 1;
            else
                return 0;
        }

        string currentKey =
            to_string(targetSum) + "_" + to_string(currentIndex);

        if (mp.find(currentKey) != mp.end())
            return mp[currentKey];

        int consider = 0;
        if (arr[currentIndex] <= targetSum)
            consider = totalPartitions(arr, targetSum - arr[currentIndex],
                                       currentIndex + 1, mp);

        int notConsider =
            totalPartitions(arr, targetSum, currentIndex + 1, mp);

        mp[currentKey] = consider + notConsider;
        return mp[currentKey];
    }
};

