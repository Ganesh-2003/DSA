https://leetcode.com/problems/sort-array-by-increasing-frequency/

class cmp{
    public:
    bool operator()(pair<int,int> p,pair<int,int> q){
         if(p.second == q.second){
            return p.first < q.first;
         }
         return p.second > q.second;
    }
};
class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq; //MaxHeap
        for(auto i:nums)
        {
            mp[i]++;
        }

        for(auto i:mp)
        {
            pq.push({i.first, i.second});

        }
        nums.clear();
        while(!pq.empty())
        {
            int freq = pq.top().second;
            int val = pq.top().first;

            while(freq>0)
            {
                nums.push_back(val);
                freq--;
            }
            pq.pop();
        }
        return nums;
    }
};