https://leetcode.com/problems/find-k-closest-elements/submissions/1478346788/

class Solution {
    public:
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            
            priority_queue<pair<int,int>> pq; //maxHeap
    
            vector<int> ans;
    
            for(int i = 0;i<arr.size();i++)
            {
                pq.push({abs(arr[i]-x),arr[i]});
                if(pq.size()>k)
                {
                    pq.pop();
                }
            }
    
            while(pq.size()!=0)
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
    
            sort(ans.begin(),ans.end());
            return ans;
    
        }
    };