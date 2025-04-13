class Solution {
    public:
      // Function to return the minimum cost of connecting the ropes.
      int minCost(vector<int>& arr) {
          // code here
          priority_queue<int,vector<int>,greater<int>> pq; //Min Heap
          
          for(auto i:arr)
          {
              pq.push(i);
          }
          
          int total = 0;
          
          while(pq.size()!=0) 
          {
              int first = pq.top();
              pq.pop();
              int second = pq.top();
              pq.pop();
              
              int cost = first + second;
              total = total + cost;
              
              pq.push(cost);
              
          }
          
          return total;
      }
  };