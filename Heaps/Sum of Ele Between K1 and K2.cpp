https://www.geeksforgeeks.org/problems/sum-of-elements-between-k1th-and-k2th-smallest-elements3133/0

class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        long long sum = 0;
        
        priority_queue <int> maxHeap;
        
        for(int i = 0;i<N;i++)
        {
            maxHeap.push(A[i]);
            if(maxHeap.size()>=K2)
            {
                maxHeap.pop();
            }
        }
        
        while(maxHeap.size()!=K1)
        {
            int ele = maxHeap.top();
            maxHeap.pop();
            
            sum = sum+ele;
            
        }
        
        return sum;
    }
};