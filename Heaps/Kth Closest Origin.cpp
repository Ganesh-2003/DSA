https://leetcode.com/problems/k-closest-points-to-origin/submissions/1479657447/


class Solution {
    public:
        vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            vector<vector<int>> res;
            priority_queue<pair<int,pair<int,int>>> maxHeap; //maxHeap
    
            for(int i = 0;i<points.size();i++)
            {
                maxHeap.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
                if(maxHeap.size()>k)
                {
                    maxHeap.pop();
                }
            }
    
            while(maxHeap.size()!=0)
            {
                res.push_back({maxHeap.top().second.first,maxHeap.top().second.second});
                maxHeap.pop();
            }
    
            return res;
        }
    };