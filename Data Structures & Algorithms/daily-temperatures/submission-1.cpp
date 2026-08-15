class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int, int>> st;
        int n = temp.size();
        if(n==0) return {};
        vector<int>ans(n);
        st.push({temp[n-1], n - 1});
ans[n-1]=0;
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && st.top().first <= temp[i]) {
                st.pop();
            }
                if (st.empty())
                    ans[i] = 0;

                else if (st.top().first > temp[i])
                    ans[i] = st.top().second-i;
                st.push({temp[i], i});
            
        }
        return ans;
    }
};
