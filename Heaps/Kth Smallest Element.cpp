//https:www.geeksforgeeks.org/problems/kth-smallest-element5635/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> pq; //MaxHeap
        
        for(auto i:arr)
        {
            pq.push(i);
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        return pq.top();
    }
};
