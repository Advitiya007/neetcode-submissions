class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (auto it : stones) {
            pq.push(it);
        }
        while (pq.size()>1) {
           
                int n1 = pq.top();
                pq.pop();
                int n2 = pq.top();
                pq.pop();
                pq.push(abs(n1 - n2));
            
        }
        return pq.top();
    }
};
