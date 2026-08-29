class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>> pq;
    int k;

    KthLargest(int k, vector<int>& nums) {
       this->k =k;
        for (int x : nums) {
            pq.push(x);

            if (pq.size() > k)
                pq.pop();
        }
    }
    
    int add(int val) {
        // if(st.top()< val) l++;
        // st.push(val);
        // if(st.size()> k) st.pop(); //wrong 
        // return st.top()
         pq.push(val);

        if (pq.size() > k)
            pq.pop();

        return pq.top();
    }
};
